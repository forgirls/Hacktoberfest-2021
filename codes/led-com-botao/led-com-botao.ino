/*
  Desenvolvido por Ialy Sousa, Karen Lorhana e Lilian Teixeira
*/


const int botao = 2; //define o pino no qual o botão vai estar conectado
const int led = 13;  //define o pino no qual o LED vai estar conectado
int estadoBotao = 0; //variável que guarda o valor de estado do botão

void setup() {
  Serial.begin(9600); //inicializa o monitor serial
  pinMode(led, OUTPUT); //define o pino do LED como saída
  pinMode(botao, INPUT); //define o pino do botão como saída
}

void loop() {
  estadoBotao = dgitalRead(botao); //lê po estado do botão (podendo ser 0 ou 1)
  if(estadoBotao == 1){ //checa o estado do botão
    digitalWrite(led, 1); //se o estado for 1 (apertado), o LED ascende
    Serial.println("1"); //imprime '1' no monitor serial
  }else{ //se não for 1...
    digitalWrite(led, 0); // o LED apaga
    Serial.print("0"); //imprime '0' no monitor serial
  }
}
