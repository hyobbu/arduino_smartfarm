#define SENSORPIN 10

void setup() {
pinMode(SENSORPIN, INPUT);
Serial.begin(9600);

}

void loop() {
  if(digitalRead(SENSORPIN) == LOW)
  {
    Serial.println("비온다");
  }
delay(1000);
}
