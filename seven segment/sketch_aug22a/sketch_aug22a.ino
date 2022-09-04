void setup() {
  //setup all the arduino pins

  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);

  //provid power to both LEDs
  digitalWrite(LEDgreen , HIGH);
  digitalWrite(LEDyellow, HIGH);

}

void loop() {
  digitalWrite(4, HIGH);  //green LED on, yellow LED Ooff 
  delay(1000);
  digitalWrite(4 ,LOW);   //yellow LED on, green LED off
  delay(1000);
  digitalWrite(12 ,HIGH);  //relay 3 switches to NO
  delay(1000);
  digitalwrite(12 ,LOW);  //relay 3 switches to NC
  delay(1000);
}