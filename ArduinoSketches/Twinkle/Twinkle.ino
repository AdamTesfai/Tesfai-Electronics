//Adam Tesfai
//twinkle


int speaker = 13;
int tempo= 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//define pitches for c scale

int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int an4 = 440;
int b4 = 494;
int c5 = 523;

//function twinkle 1
void twinkle1() {
  //note for twinkle line 1
  int lineANotes [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4, };
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, h};
    
  for (int n = 0; n < 14; n++) {
   tone(speaker, lineANotes[n], lineARhythm[n]);
  delay(lineARhythm[n]);
  }
}

void twinkle2() {
  //note for twinkle line 2
  int lineANotes [] = {g4, g4, f4, f4, e4, e4, d4, g4, g4, f4, f4, e4, e4, d4, };
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, h};
    
  for (int n = 0; n < 14; n++) {
   tone(speaker, lineANotes[n], lineARhythm[n]);
  delay(lineARhythm[n]);
  }
}

void setup(){
  tone(13, 262, 500*0.8);
  delay(44);
  
}
void loop (){
  twinkle1();
  twinkle2();
  twinkle1();
}
