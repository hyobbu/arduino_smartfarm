#include <Servo.h>
#define SENSORPIN 5
#define SERVOPIN 6


Servo myservo;  
int pos = 0;  


void setup() {
pinMode(SENSORPIN, INPUT);
myservo.attach(SERVOPIN); 

Serial.begin(9600);

}

void loop() {
  if(digitalRead(SENSORPIN) == LOW)
  {
    Serial.println("비온다");
    pos = 0;
    myservo.write(pos);
  }
  else{
    Serial.println("맑음");
    pos = 90;
    myservo.write(pos);
  }
delay(1000);
}
