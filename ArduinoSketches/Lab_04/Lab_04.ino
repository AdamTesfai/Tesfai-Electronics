//Adam Tefai
//1/8/15
//Period 4
// Hakuna matata

int speaker = 13;
int tempo;
int w = tempo; //whole note 1
int h = w/2;// half note 1/2
int q = h/2;// quarter note 1/4
int e = q/2;// eight note 1/8
int s = e/2;// sixteenth note 1/16

//define pitches for c scale

int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;
int c4s= 277;
int d4s= 311;
int f4s= 370;
int g4s= 415;
int a4s= 466;
int r= 0;

int sensorPin= 0; // input pin
int sensorValue= 0;// variable to store the sensor valu

void song() {
  
     tempo= analogRead(sensorPin);
 w = tempo; //whole note 1
 h = w/2;// half note 1/2
 q = h/2;// quarter note 1/4
 e = q/2;// eight note 1/8
 s = e/2;// sixteenth note 1/16
  
  //note for hakuna matata
  int lineANotes [] = {d4s, d4s, d4, d4s,  d4, c4, r, r,    a4, c4, d4, d4s, d4,    c4, r,     r, r, c4, d4s, d4, d4s,        d4, c4, r,     a4, c4, d4s, d4,   d4,    r, r, e4, g4, g4,      a4, a4, r,    a4, g4, e4, d4, c4,     d4, g4, r,    r, e4, b4,   d4, c4, c4,       r, e4, e4, d4, d4,   r, d4, d4s, d4, d4s,   d4, c4};
  int lineARhythm [] = {e, q, e, e,      e, e, h, q,       e, e, q, q, q,           h, h,      q, e, e, q, e, e,              e, q, h,       q, q, q, q,         w,    q, e, e, q, q,         q, q, h,       q, e, q, e, e,        w,e, q,        h, q, q,     q, e, h,           q, q, q, e, h,        e, e, q, e, e, e, h};
    
  for (int n = 0; n < 64; n++) {
    tempo= analogRead(sensorPin);
 w = tempo; //whole note 1
 h = w/2;// half note 1/2
 q = h/2;// quarter note 1/4
 e = q/2;// eight note 1/8
 s = e/2;// sixteenth note 1/16

   tone(speaker, lineANotes[n], lineARhythm[n]);
  delay(lineARhythm[n]);
  }

}


void setup(){
  pinMode(speaker, OUTPUT);
  
  
}
void loop (){
  song();
 //read the sensor pin vlaue // use the sensor value in output function 
}
