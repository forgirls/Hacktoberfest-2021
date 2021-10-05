/*
  Desenvolvido por Ialy Sousa, Karen Lorhana e Lilian Teixeira
*/

int pinoPot = A0;
int pinoLED = 13;
int valorPot = 0;

void setup() {
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  valorPot = analogRead(pinoPot);

  digitalWrite(pinoLED, HIGH);
  delay(valorPot);
  digitalWrite(pinoLED, LOW);
  delay(valorPot);    
}
