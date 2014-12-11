// Adam TEsfai
//Led Blink Program

// my functins
void blink(){
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
}//end blink

// setup function

void setup(){
//setup pin 9 for output
 pinMode(9, OUTPUT);
}

//loop fuction
void loop() {
  blink();  
}
