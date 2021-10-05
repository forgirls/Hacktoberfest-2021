/*
  Desenvolvido por Ialy Sousa, Karen Lorhana e Lilian Teixeira
*/

//a função 'setup' executa assim que a placa é iniciada
void setup() {
  //inicializa a porta 13 como saída
  pinMode(13, OUTPUT);
}


// a função 'loop' vai estar sempre executando
void loop() {
  digitalWrite(13, HIGH); //ascende o LED
  delay(1000); //tem uma pausa de 1 segundo
  digitalWrite(13, LOW); //desliga o LED
  delay(1000); //tem uma pausa de 1 segundo
}
