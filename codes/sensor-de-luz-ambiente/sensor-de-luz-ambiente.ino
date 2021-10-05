/*
  Desenvolvido por Ialy Sousa, Karen Lorhana e Lilian Teixeira
*/

int pinoLed = 13; //define o pino no qual o LED vai estar conectado
int pinoSensorLuz = A0; //define o pino analógico A0 como entrada do sensor de luz (LDR)
int valorLuz = 0; //variável que guarda o valor lido do LDR

void setup() {
  pinMode(pinoLed, OUTPUT); //declara o pino do LED como saída
}

void loop() {
  valorLuz = analogRead(pinoSensorLuz); //lê o valor do sensor 

  if(valorLuz<750){ //se o valor do LDR for menor que 750
    digitalWrite(pinoLed, HIGH); //o LED ascende
  }else{ //senão..
    digitalWrite(pinoLed, LOW); //o LED desliga
  }
  delay(10);
}
