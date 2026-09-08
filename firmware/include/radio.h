#ifndef RADIO_H
#define RADIO_H

#include <Arduino.h>
#include <Wire.h>

class Radio {
    pubic: 
        //inicializar com os valores padrao da class
        Radio();

        //iniciar o hardware e o chip
        bool begin():

        void setFrequency (float frequencyMhz); 
        void setVolume(uint8_t volume);
        float getFrequency() const;
        uint8_t getVolume() const;

        bool isReady() const;
    
    private: 
        void writeRegister(uint8_t reg, uint16_t value)

        void softReset();

        //estado do radio
        float m_frequency;
        uint8_t m_volume;
        bool m_ready;
}

#endif

/*
Nesse codigo definimos a classe Radio, com metodos publicos: begin(), setFrequecy... Privados: writeRegister()... e variaveis privadas, como: frequecia, volume...
*/