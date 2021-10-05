/*
  Desenvolvido por Ialy Sousa, Karen Lorhana e Lilian Teixeira
*/

int pinoPot = A0; //define o pino analógico A0 como entrada do potenciômetro
int pinoLED = 13; //define o pino no qual o LED vai estar conectado
int valorPot = 0; //variável que guarda o valor lido do potenciômetro

void setup() {
  pinMode(pinoLED, OUTPUT); //declara o pino do LED como saída
}

void loop() {
  valorPot = analogRead(pinoPot); //lê o valor do sensor

  digitalWrite(pinoLED, HIGH); //liga o LED
  delay(valorPot); //tem uma pausa de <valorPot> milisegundos
  digitalWrite(pinoLED, LOW); //desliga o LED
  delay(valorPot); //tem uma pausa de <valorPot> milisegundos   
}
