# **ARA0301 - Programação de Microcontroladores**

Repositório para aulas e demais materiais da disciplina ARA0301 da Faculdade Estácio.

-----

# **Ementa**

1. Microcontroladores
   1. A evolução dos microcontroladores
   2. Componentes básicos de microcontroladores
   3. Distinção entre os diferentes microcontroladores
   4. Identificação de microcontroladores, com base nas famílias e tipos existentes no mercado
2. Compiladores e Simuladores
   1. Linguagem C na programação de Sistemas Embarcados
   2. Ferramentas de desenvolvimento de software para sistemas embarcados
   3. Principais funções do módulo simulador da plataforma Arduino e circuitos eletrônicos da ferramento TinkerCAD
   4. Características da ferramente de simulação PICSimLab para microcontroladores PIC
3. Periféricos integrados
   1. Portas de entrada e saída dos microcontroladores para a interação com dispositivos externos
   2. Conversores analógico-digitais para criação de sistemas de aquisição de dados com microcontroladores
   3. Uso de temporizadores e contadores para o desenvolvimento de sistemas de tempo real com microcontroladores
   4. Uso da modulação por largura de pulso (PWM) para o controle de dispositivos externos
4. Periféricos externos (**crédito digital**)
   1. Funções de programação de protocolos de transmissão de dados em microcontroladores para a comunicação com dispositivos externos
   2. Sensores e atuadores para a programação de sistemas de controle embarcados
   3. Funções para a programação de mostradores na criação de interfaces com o usuário
   4. Importância da programação de interrupções para o recebimento otimizado de dados de dispositivos externos ao microcontrolador
5. Projetos com microcontroladores
   1. Plataformas de hardware e software para um projeto com microcontrolador
   2. Limitações dos microcontroladores para a especificação de projetos embarcados de alto desempenho
   3. Boas práticas de programação para o desenvolvimento do software embarcado nos microcontroladores
   4. Microcontroladores para projetos de comunicação sem fio e Internet das coisas (IoT)

-----

## **Datas**

Turmas

![](https://img.shields.io/badge/Quarta-1002-lightgrey)

<br />

**Março**

| Seg | Ter | Qua | Qui | Sex |
|---|---|---|---|---|
|    |    | ![01Mar](https://placehold.co/25/limegreen/white?text=01) | 02 | 03 |
| 06 | 07 | ![08Mar](https://placehold.co/25/limegreen/white?text=08) | 09 | 10 |
| ![13Mar](https://placehold.co/25/orange/white?text=13) | 14 | ![15Mar](https://placehold.co/25/limegreen/white?text=15) | 16 | 17 |
| 20 | 21 | ![22Mar](https://placehold.co/25/limegreen/white?text=22) | 23 | 24 |
| 27 | 28 | ![29Mar](https://placehold.co/25/limegreen/white?text=29) | 30 | 31 |

<br />

**Abril**

| Seg | Ter | Qua | Qui | Sex |
|---|---|---|---|---|
| ![03Abr](https://placehold.co/25/orange/white?text=03) | 04 | ![05Abr](https://placehold.co/25/limegreen/white?text=05) | 06 | ![07Abr](https://placehold.co/25/cornflowerblue/white?text=07) |
| 10 | 11 | ![12Abr](https://placehold.co/25/limegreen/white?text=12) | !13 | 14 |
| 17 | 18 | ![19Abr](https://placehold.co/25/limegreen/white?text=19) | 20 | ![21Abr](https://placehold.co/25/cornflowerblue/white?text=21) |
| 24 | 25 | ![26Abr](https://placehold.co/25/red/white?text=26) | 27 | 28 |

<br />

**Maio**

| Seg | Ter | Qua | Qui | Sex |
|---|---|---|---|---|
| ![01Mai](https://placehold.co/25/cornflowerblue/white?text=01) | ![02Mai](https://placehold.co/25/orange/white?text=02) | ![03Mai](https://placehold.co/25/limegreen/white?text=03)  | 04 | 05 |
| 08 | 09 | ![10Mai](https://placehold.co/25/limegreen/white?text=10) | 11 | 12 | 
| ![15Mai](https://placehold.co/25/orange/white?text=15) | 16 | ![17Mai](https://placehold.co/25/limegreen/white?text=17) | 18 | 19 |
| 22 | 23 | ![24Mai](https://placehold.co/25/limegreen/white?text=24) | !25 | 26 |
| 29 | 30 | ![31Mai](https://placehold.co/25/limegreen/white?text=31) |    |    |

<br />

**Junho**

| Seg | Ter | Qua | Qui | Sex |
|---|---|---|---|---|
|    |    |    | 01 | 02 |
| 05 | 06 | ![07Jun](https://placehold.co/25/red/white?text=07) | ![08Jun](https://placehold.co/25/cornflowerblue/white?text=21) | ![09Jun](https://placehold.co/25/cornflowerblue/white?text=09) |
| 12 | 13 | ![14Jun](https://placehold.co/25/limegreen/white?text=14) | 15 | 16 |
| 19 | 20 | ![21Jun](https://placehold.co/25/red/white?text=21) | 22 | 23 |
| 26 | 27 | 28 | 29 | 30 |

<br />

*Legendas*

![Aula](https://img.shields.io/badge/-Aula-limegreen?style=for-the-badge)
![Feriado](https://img.shields.io/badge/-Feriado-cornflowerblue?style=for-the-badge)
![AvA](https://img.shields.io/badge/-Avaliando_o_Aprendizado-orange?style=for-the-badge)
![Prova](https://img.shields.io/badge/-Prova-red?style=for-the-badge)

-----

## **Avaliação**

* Média = (AV1 + AV2 + AVD)/3
  * Valor mínimo: 6,0.
  * AV1
    * Prova + Trabalho.
    * Valor mínimo: 4,0.
    * É possível o acréscimo de 1,0 ponto através do AvA 1 e AvA 2 (0,5 de cada).
  * AV2
    * Prova + Trabalho.
    * Valor mínimo: 4,0.
    * É possível o acréscimo de 1,0 ponto através do AvA 3 e AvA 4 (0,5 de cada).
  * AVD
    * Prova.
    * Valor mínimo: 4,0.
    * Corresponde ao conteúdo do Crédito Digital.
    * Ocorre no mesmo período da AV2.
  * AV3
    * Prova substitutiva.
    * O aluno deverá fazer essa prova se
      * Tiver faltado AV1 ou AV2, ou
      * AV1 ou AV2 estiver com valor abaixo de 4,0, ou
      * Média abaixo de 6,0.
    * O valor dessa prova substituirá o menor valor entre AV1 e AV2.
  * AVDS
    * Prova substitutiva.
    * O aluno deverá fazer essa prova se,
      * Tiver faltado AVD, ou
      * AVD com valor abaixo de 4,0.
* Frequência mínima: 75%
  * Lembre que falta também reprova!

-----

## **Bibliografia**

**Básica**

Almeida, Rodrigo Maximiniano A. **Programação de Sistemas Embarcados -­ Desenvolvendo Software para Microcontroladores em Linguagem C**. São Paulo: Grupo GEN, 2016. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/#/books/9788595156371

Monk, Simon. **Programação com Arduino: Começando com Sketches**. 2 Ed. Porto Alegre: Bookman, 2017. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/books/9788582604472

Zanco, Wagner da Silva. **Microcontroladores PIC18 com Linguagem C ­ Uma Abordagem Prática e Objetiva**. São Paulo: Érica, 2010. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/books/9788536519982

<br />

**Complementar**

Miyadaira, Alberto Noboru. **Microcontroladores PIC18 ­ Aprenda e Programe em Linguagem C**. 1 Ed. São Paulo: Érica, 2013. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/books/9788536519968

Monk, Simon. **30 Projetos com Arduino**. 2 Ed. São Paulo: Érica, 2014. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/#/books/9788582601631

Oliveira, Cláudio Luís Vieira; Zanetti, Humberto Augusto Piovesana. **Arduino Descomplicado - Como Elaborar Projetos de Eletrônica**. 1 Ed. São Paulo: Érica, 2015. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/books/9788536518114

Souza, David José. **Desbravando o PIC ­ Ampliado e Atualizado para PIC 16F628A**. 12 Ed. São Paulo: Saraiva, 2009. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/#/books/9788536518312/

Stevan Jr., Sérgio Luiz; Farinelli, Felipe Adalberto. **Domótica ­- Automação Residencial e Casas Inteligentes com Arduino e ESP8266**. 1 Ed. São Paulo: Saraiva, 2018. <br>
Disponível em: https://integrada.minhabiblioteca.com.br/#/books/9788536530055/