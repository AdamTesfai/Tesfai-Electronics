// functions


void printHappy(String name) {
String result = "Happy Birthday" + name;
Serial.println (result);
}

float computeArea(float vid, float hei) {
  float area = vid*hei;
  return area;
}

void function1(){
Serial.println("I am an Arduino and I communicate at");//end
Serial.println("9600 Baud rate. Ports 0 and 1 are used");
Serial.println("for serial communication.");
Serial.println("");
Serial.println("Serial communication works well for debugging");
Serial.println("and monitoring sensor values during the");
Serial.println("execution of a program.");
}

void function2a(int x, int y){
Serial.println(x/2)*y;
}

void function2b(int x, int y){
Serial.println(2*x)+x*y;
}

void function3() {
  String Characters []={"Rambo", "Naruot", "Rocky", "Scarface", "Godfather"};
  Serial.println("My favorite Movie characters are:");
  for(int i = 0; i < 5; i++)
  {
  Serial.println (Characters[i]);
  }
}

void function4(){
  String a []= {"1", "2", "3", "4", "5", "6", "7", "8"};
  Serial.println("");
  for(int i = 0; i < 8; i++){
    Serial.println (a[i]);
  }
  for(int i=8; i > -1; i--){
    Serial.println (a[i]);
  }
  for(int i=1; i<8; i+=2){
    Serial.println (a[i]);
  }
  for(int i=0; i<8; i+=2){
    Serial.println (a[i]);
  }
  for(int i=8; i>-1; i-=2){
    Serial.println (a[i]);
  }
  for(int i=7; i>-1; i-=2){
    Serial.println (a[i]);
  }
}

void function5(){
  String c []= {"C", "D", "E", "F", "G", "A", "B", "C"};
  Serial.println("");
  for(int i = 0; i < 8; i++){
    Serial.println (c[i]);
  }
  for(int i=8; i>-1; i--){
    Serial.println (c[i]);
  }
}


void printFibo(int n){
  int prev=0;
  int cur=1;
  int fibo=0;
  for (int i=0; i< n; i++){
    fibo=prev + cur;
    Serial.println(fibo);
    prev=cur;
    cur=fibo;
  }
  
}

float function7(int a, int b){
  float P=(a/b);// Power=Work/Time
  return P;
}

//Wild numbers
void function8(){
  for (int i = 0; i < 100000; i++) {
    Serial.println(i*10);// ran out of space becaue it can only hold 16 bits so it starts ounting in the negatives. 
  }
}

void function9(){
  long result=0;
  for(int i=0; i<1000; i++) {
    if ( i % 3 == 0 || i % 5==0) {
    result += i;
  }
   Serial.println(result);}
}


void function10(){
  String words[]= {"Cat","Dog","Zebra","Lion","Robot"};
  String result = "";
  for(int i=0; i <5; i++) {
    int index = (int)random(5);
    result += words[index] + " ";
  }
  Serial.println(result);
}

void setup (){
Serial.begin(9600);
//function1();
//function2a(120, 512);
//function2b(97, 32);
//function3();
//function4();
//function5();
//printFibo(20);
//Serial.println(function7(12, 3));
//function8();
//function9();
//function10();
}// end set up

void loop() {
}


