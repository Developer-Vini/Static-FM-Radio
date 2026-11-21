# FM Radio

# About the Project

FM radio project. The goal is to design and build a complete FM radio station, documenting the entire process...

<img width="681" height="363" alt="image" src="https://github.com/user-attachments/assets/45214018-bd19-4ad3-a20f-51c57077b434" />
<img width="674" height="610" alt="image" src="https://github.com/user-attachments/assets/9240725b-71dc-4f79-aa81-2a7514502929" />
<img width="648" height="524" alt="image" src="https://github.com/user-attachments/assets/3dda3a62-b93e-415e-b6ce-cb92cb119ba9" />

## Objective

- Custom PCB projector with RDA5807 FM receiver
- Write firmware for Seeed Studio XIAO RP2040
- Document the entire development process
- Learn about hardware

# Components used:

- XIAO RP2040 -> Main microcontroller
- RDA5807M -> FM receiver
- TDA2822 -> Audio amplifier
- 3.5mm jack -> Audio output

# Software used

- **Schematic**: EasyEDA
- **Firmware**: Arduino Framework + PlatformIO
- **VSCode**: Codar

## How to use?

### 1. Compile the firmware

```bash firmware from CD
```pio run
```

### 2. Upload to the XIAO

```bash
`pio run --target upload
```

## Journal
The complete journal with the development process is at:

![Journal](docs/journal.md)

There you will find:
- Project objective
- Problems encountered
- Innovative solutions
- Time spent on each step
- Reflections on the process
