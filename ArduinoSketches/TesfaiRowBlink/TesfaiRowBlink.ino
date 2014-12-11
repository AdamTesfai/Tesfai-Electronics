//Classwork: LED Array Assessment
//Adam Tesfai
//All work here is honestly obtained and is my own

//Objects in Program



//Setup for Program
void blink(){
  int pins []={2,3,4,5,6,7,8,9};
  for(int i = 0; i<8; i++) {
  digitalWrite(pins[i], HIGH);
  delay(500);
  digitalWrite(pins[i], LOW);
  delay (500);
  }
  for(int i=8; i>-1; i--){
   digitalWrite(pins[i], HIGH);
  delay(500);
  digitalWrite(pins[i], LOW);
  delay (500);
  }
}
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
}

//Loop for program
void loop() {
  blink();
}

