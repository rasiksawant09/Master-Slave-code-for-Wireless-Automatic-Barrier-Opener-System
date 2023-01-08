void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == HIGH){
    Serial.println("A");
    delay(200);
  }else if(digitalRead(3) == LOW){
    Serial.println("a");
    delay(200);    

  }
 delay(200);
}
