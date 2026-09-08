#incldue "radio.h"

//criar uma instancia global do radio
Radio radio;

void setup(){
    Serial.begin(SERIAL_BAUD_RATE);
    while(!Serial){
        delay(10);
    }

    Serial.println("Radio FM - Static")
    Serial.println("Iniciando...");

    //iniciar o radio
    if(radio.begin()){
        Serial.println("Radio OK!");
        Serial.printf("Frequencia: %.f MHz\n", radio.getFrequency());
        Serial.printf("Volume: %d\n", radio.getVolume());
    }else{
        Serial.println("Erro: Radio nao inicializou!");
    }
}

void loop(){
    //por enquanto nao faz nada aqui no loop
    //o radio ja ta sintonizado e funcionando
    delay(1000);
}

/* aqui nao tem muito o que explicar. Ele cria um instacia da classe Radio,
no setup() ele inicializa a serial e o radio e no loop() nao faz nada kakak o radio continua tocando*/