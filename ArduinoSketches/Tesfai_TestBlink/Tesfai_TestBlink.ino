//Test of arduino
//blink

//pin 13 has onboard LED
int led = 13;

// setup runs once when board is activated
void setup() {
  //pin 13 as output
  pinMode(led, OUTPUT);
}

//Loop function runs repeatedly while board is on
void loop() { 
  digitalWrite(led, HIGH) ; // turn led on 13 on
  delay(1000);  // wait 1 sec
  digitalWrite(led, LOW); // turn led on 13 off
  delay(1000); //wait 1 sec
}
