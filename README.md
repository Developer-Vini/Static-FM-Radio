# Rádio FM

# Sobre o projeto 

Projeto de rádio FM. O objetivo é projetar e construir um rádio FM completo, documentar todo o processo...

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
