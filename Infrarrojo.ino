
const int analogInPin = A1;
const int OutPin = 13;
int cont = 0;
int band = 0;

void setup() {
  Serial.begin(9600);
  pinMode(OutPin, OUTPUT);
  pinMode(analogInPin, INPUT);
}\

void loop() {
  sensorValue = analogRead(analogInPIn);
  
  do{

    if(sensorValue > 900){
    digitalWrite(OutPin, HIGH){
      band = 1;
    } else {
      digitalWrite(OutPin, LOW)

      if(band == 1){
        band = 2;
      }
    }

    if (band == 2){
      cont++;
      band == 0;
      Serial.println("Se han pasado objetos : " + cont + "Veces");
    }

    Serial.println(sensorValue);
    delay(100);

  } while (sensorValue <= 500)

  }


  

}
