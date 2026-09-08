# Journal - Projeto Rádio FM Static

## 07/09/2026 - Primeiro dia: estudo e preparação

### O que eu fiz hoje?
- Pesquisei sobre o programa Static do Hack Club
- Entendi que o objetivo é projetar um rádio FM completo: PCB, firmware e case
- Li sobre os componentes do kit: XIAO RP2040, RDA5807, TDA2822, potenciômetros, botões, jacks e antena
- Estudei o chip RDA5807 e como ele funciona via I2C
- Criei a estrutura do projeto no computador e organizei as pastas

### O que aprendi
- O RDA5807 é um receptor FM que funciona via I2C no endereço 0x10
- O XIAO RP2040 é o microcontrolador que vai controlar o rádio
- O TDA2822 amplifica o sinal de áudio do RDA5807

### Próximos passos
- Montar o esquemático
- Fazer a PCB
- Escrever o firmware
- Documentar tudo

---

## 07/09/2026 - Esquemático e PCB

### O que eu fiz hoje?
- Criei o esquemático completo no EasyEDA
- Adicionei todos os componentes principais:
  - XIAO RP2040 (microcontrolador)
  - RDA5807M (receptor FM)
  - TDA2822 (amplificador de áudio)
  - Jack de áudio 3.5mm (saída de som)
- Fiz todas as conexões:
  - Alimentação 3.3V do XIAO para RDA5807 e TDA2822
  - GND comum entre todos os componentes
  - I2C: SDA (GP4) e SCL (GP5) do XIAO para o RDA5807
  - Saída de áudio: OUT-L e OUT-R do RDA5807 para IN1+ e IN2+ do TDA2822
  - Saída do TDA2822 para o jack de áudio
- Posicionei todos os componentes na PCB
- Fiz o roteamento automático das trilhas
- Verifiquei que não há erros de conexão
- Exportei os arquivos Gerber para fabricação

### Desafios que enfrentei
- Demorei 4h para resolver um bug no EasyEDA
- Tive que aprender a usar a ferramenta de roteamento automático
- Ajustei as regras de roteamento para funcionar corretamente

### O que aprendi
- Como funciona o roteamento de PCB
- A importância das regras de design (largura de trilha, espaçamento)
- Como exportar arquivos Gerber para fabricação
- O RDA5807 usa I2C no endereço 0x10 para comunicação

### Resultado
- Esquemático completo e funcional
- PCB de 100mm x 60mm com todos os componentes
- Arquivos de fabricação prontos em `gerber/`
- Imagens do esquemático e PCB salvas em `docs/`

### Próximos passos
- Escrever o firmware para o XIAO RP2040
- Testar o circuito
- Documentar o código
- Preparar para submissão

---


## 08/09/2026 - Preparação para submissão

### O que eu fiz hoje?
- Revisar toda a documentação do projeto
- Atualizar o journal com o progresso completo
- Organizar a estrutura de pastas
- Preparar o projeto para ser público

### Status atual do projeto
- ✅ Esquemático completo no EasyEDA
- ✅ PCB projetada e exportada 
- ✅ Journal documentando todo o processo

