#include "radio.h"
Radio::Radio()
    : m_frequency(FM_FREQ_DEFAULT)
    , m_volume(10)
    , m_ready(false)
{
}
bool Radio::begin(){
    //inicializar o I2C
    Wire.setSDA(PIN_I2C_SDA);
    Wire.setSCL(PIN_I2C_SCL);
    Wire.begin();

    //softreset do chip
    softReset();
    delay(500);

    //configurar o chip: habilitar,banda FM,espacamento 100KHz
    writeRegister(RDA5807_REG_CONTROL, 0xC001);

    //vou definir um volume inicial bem baixin,
    m_volume = 10; //vou colocar 10 pra nao ficar muito alto nem muito baixo
    writeRegister(RDA5807_REG_VOLUME, m_volume);



    //sintonizar a frequecia padrao
    setFrequency(m_frequency);

    m_ready = true;
    return true;

}
void Radio::setFrequency(float frequencyMhz){
    //limitar faixa
    if(frequencyMhz < FM_FREQ_MIN){
        frequencyMhz = FM_FREQ_MIN
    }
    if(frequencyMhz > FM_FREQ_MAX){
        frequencyMhz = FM_FREQ_MAX
    }

    m_frequency = frequencyMhz;

    //convertendo o MHz pra o canal do RDA5807
    uint16_t channel = (uint16_t)((frequencyMhz - 76.0f) * 10.0f);

    //enviar o comando de sintonia
    Wire.beginTransmission(RDA5807_I2C_ADDRESS);
    Wire.write(RDA5807_REG_CHANNEL);
    Wire.write((channel >> 2) & 0xFF);
    Wire.write(((channel & 0x03) << 6 ) | 0x10);
    Wire.endTransmission();
}
void Radio::setVolume(uint8_t volume){
    m_volume = constrain(volume, 0, 15);
    writeRegister(RDA5807_REG_VOLUME, m_volume);
}
float Radio::getFrequency() const{
    return m_frequency;
}
uint8_t Radio::getVolume() const{
    return m_volume;
}
bool Radio::isReady() const {
    return m_ready;
}
void Radio::writeRegister(uint8_t reg, uint16_t value){
    Wire.beginTransmission(RDA5807_I2C_ADDRESS);
    Wire.write(reg);
    Wire.write((value >> 8) & 0xFF); //byte altao
    Wire.write(value & 0xFF); //byte baixin
    Wire.endTransmission();
}
void Radio::softReset(){
    writeRegister(RDA5807_REG_CONTROL, 0xC001);
}

/*
    explicando o codigo(nao vou explicar cada linha, da muito trabalho, vou coisar so as funcao)
    begin() = inicializa tudo: o chip, o volume...
    setFrequency() = converte mhz  pra o formato do RDA... e envia via i2c
    setVolume() = limita volume entre 0 e 15 e envia tudo pra o chip
    writeRegister() = funcao generica pra escrever em qualquer registrador
    softReset() = reinicia o chip
*/