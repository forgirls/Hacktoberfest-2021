/*
 * Código de escrita em pino digital: botão e LED
 * Se o botão estiver pressionado, o LED acende.
*/

const int botao = 2;
const int led = 13;
int estadoBotao = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoBotao = digitalRead(botao);
  if(estadoBotao == 1){
    digitalWrite(led, 1);
    Serial.println("1");
  }else{
    digitalWrite(led, 0);
    Serial.print("0");    
  }
}
