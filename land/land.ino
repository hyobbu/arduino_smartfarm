#define AOPIN 0
#define DOPIN 13

int sensorValue = 0;

void setup() {
  Serial.begin(9600)
  pinMode(DOPIN, INPUT);
}

void loop() {
  sensorValue = analogRead(AOPIN);
  delay(1000);
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  if(digitalRead(DOPIN)==LOW)
  {
    Serial.println(" 습도 낮음");
  }
}
