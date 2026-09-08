#ifndef CONFIG_H
#define CONFIG_H

//HARDWARE:

//Endereco I2C do RDA5807
#define RDA5807_I2C_ADDRESS 0x10

//pinos
#define PIN_I2C_SDA 4
#define PIN_I2C_SCL 5

//frequencia
#define FM_FREQ_MIN 87.6f
#define FM_FREQ_MAX 108.0f
#define FM_FREQ_DEFAULT 101.2f

//RADIO:

//registradores do rda...
#define RDA5807_REG_CHIP_ID 0x00
#define RDA5807_REG_CONTROL 0x02
#define RDA5807_REG_CHANNEL 0x03
#define RDA5807_REG_VOLUME  0x05






//debug
#define SERIAL_BAUD_RATE 115200