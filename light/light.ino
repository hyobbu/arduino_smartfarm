void setup() {
  // put your setup code here, to run once:
  Serial.begin(1200);
  //pinMode(9, OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  int ledLight = map(light, 0, 1023, 255, 0);
  Serial.print("Light : ");
  Serial.println(ledLight);
  analogWrite(9, ledLight);
  //digitalWrite(9, HIGH);
}


