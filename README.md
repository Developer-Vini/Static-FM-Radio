# Static Radio - Rádio FM Hack Club

![Status](https://img.shields.io/badge/status-Completo-green)
![License](https://img.shields.io/badge/license-MIT-blue)
![Platform](https://img.shields.io/badge/platform-EasyEDA%20%2F%20Arduino-green)

# Sobre o projeto 

Projeto de rádio FM receptor desenvolvido para o programa **Static do Hack Club**. O objetivo é projetar e construir um rádio FM completo, documentar todo o processo e enviar a submissão para ganhar o kit com peças gratuitas.

## Objetivo

- Projetar PCB customizada com receptor FM RDA5807
- Escrever firmware para Seeed Studio XIAO RP2040
- Documentar todo o processo de desenvolvimento
- Aprender sobre hardware

# Componentes utilizados:

- XIAO RP2040 -> Microcontrolador principal 
- RDA5807M  -> Receptor FM
- TDA2822   -> Amplificador de audio
- Jack 3.5mm -> Saida de audio

# Softwares que utilizei
- **Esquematização**: EasyEDA
- **Firmware**: Arduino Framework + PlatformIO
- **VSCode**: Codar

## Estrutura do projeto
```
radio/
├── docs/
│   └── journal.md          # Documentação do processo
├── firmware/
│   ├── include/
│   │   ├── config.h        # Configurações
│   │   └── radio.h         # Interface do rádio
│   └── src/
│       ├── main.cpp        # Ponto de entrada
│       └── radio.cpp       # Driver do RDA5807
├── pcb/
│   ├── gerber/             # Arquivos de fabricação
│   ├── PCB_PCB1_2026-09-07.png
│   └── SCH_Esquematico1_1-P1_2026-09-07.png
└── README.md
```

## Como usar?

### 1. Compilar o firmware

```bash
cd firmware
pio run
```

### 2. Upload para o XIAO

```bash
pio run --target upload
```

## Journal
O journal completo com o processo de desenvolvimento está em:
![Journal](docs/journal.md)

Lá você encontrará:
- Objetivo do projeto
- Problemas encontrados
- Soluções implementadas
- Tempo gasto em cada etapa
- Reflexões sobre o processo
