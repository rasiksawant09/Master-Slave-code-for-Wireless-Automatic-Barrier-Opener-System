#include<Servo.h>
Servo motor;
int p=150;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  motor.attach(9);


}

void loop() {
  // put your main code here, to run repeatedly:
  motor.write(p);
  if(Serial.available())
  {
  char val = Serial.read(); 
  if(val == 'A')
  {
    p = 90;
    motor.write(p);
    delay(3000);
  }
  else if(val == 'a')
  {
    p=150;
    motor.write(p);
  }
  }

}
