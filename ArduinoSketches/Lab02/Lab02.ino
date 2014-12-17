//Classwork: LED Array Assessment
//Adam Tesfai
//All work here is honestly obtained and is my own

//Objects in Program



//Setup for Program
void blink(){
  int pins []={2,3,4,5,6,7,8,9};
  for(int i = 0; i<8; i++) {
  digitalWrite(pins[i], HIGH);
  delay(75);
  digitalWrite(pins[i], LOW);
  delay(75);
  }
  for(int i=8; i>-1; i--){
   digitalWrite(pins[i], HIGH);
  delay(75);
  digitalWrite(pins[i], LOW);
  delay (75);
  }
}
void skip1up(){
  int pins []={2,3,4,5,6,7,8,9};
  for(int i=0; i<8; i+=2){
   digitalWrite(pins[i], HIGH);
  delay(75);
  digitalWrite(pins[i], LOW);
  delay (75);
  } 
  for(int i=1; i>-1; i-=2){
      digitalWrite(pins[i], HIGH);
  delay(75);
  digitalWrite(pins[i], LOW);
  delay (75);
 
  }
}


void fibopattern(int n){
  
  int prev=0;
  int cur=1;
  int fibo=0;
    int pins []={2,3,4,5,6,7,8,9};
  for (int i=0; i< n; i++){
    fibo=prev + cur;
   digitalWrite(pins[i], HIGH);
  delay(110);
  digitalWrite(pins[i], LOW);
  delay (110);
   prev=cur;
    cur=fibo;
  
  }
}


void crisskross(){
  int pins []={2,3,4,5,6,7,8,9};
  for(int i=7; i>-1; i-=2) {

   digitalWrite(pins[i], HIGH);
   digitalWrite(pins[7-i], HIGH);
  delay(100);
  digitalWrite(pins[i], LOW);
  digitalWrite(pins[7-i], LOW);
  delay(100);
    
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
  delay(100);
  skip1up();
  delay(100);
  fibopattern(20);
  delay(100);
  crisskross();
  delay(100);
  
}

