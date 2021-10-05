int pinoLed = 13;
int pinoSensorLuz = A0;
int valorLuz = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLuz = analogRead(pinoSensorLuz);

  if(valorLuz<750){
    digitalWrite(pinoLed, HIGH);
  }else{
    digitalWrite(pinoLed, LOW);
  }
  delay(10);    
}
