//----------------------------------------------------
// paul's LED arrow
// dan@marginallyclever.com 2017-06-19
//----------------------------------------------------


#define WAIT 200  // animation time


void setup() {
  // set all the LED pins to output for MAXIMUM POWER
  int i;
  for(i=2;i<7;++i) {
    pinMode(i,OUTPUT);
  }
}


void loop() {
  // uncomment these loops to see different animation styles
  //for(int i=0;i<5;++i) v1();
  for(int i=0;i<5;++i) v2();
  //for(int i=0;i<5;++i) v3();
  //for(int i=0;i<5;++i) v4();
  //for(int i=0;i<5;++i) v5();
}

void v1() {
  // one at a time with small delay between lights.
  int i;
  for(i=2;i<7;++i) {
    digitalWrite(i,HIGH);
    delay(WAIT);
    digitalWrite(i,LOW);
    delay(WAIT);
  }
}


void v2() {
  // one at a time, no delay between lights.
  int i;
  for(i=2;i<7;++i) {
    digitalWrite(i,HIGH);
    delay(WAIT);
    digitalWrite(i,LOW);
    //delay(WAIT);
  }
}


void v3() {
  // on 1-2-3-4-5-6, off 1-2-3-4-5-6
  int i;
  for(i=2;i<7;++i) {
    digitalWrite(i,HIGH);
    delay(WAIT);
  }
  for(i=2;i<7;++i) {
    digitalWrite(i,LOW);
    delay(WAIT);
  }
}


void v4() {
  // all on, then all off.
  int i;
  for(i=2;i<7;++i) {
    digitalWrite(i,HIGH);
  }
  delay(WAIT);
  for(i=2;i<7;++i) {
    digitalWrite(i,LOW);
  }
  delay(WAIT);
}


void v5() {
  // one off at a time.
  int i;
  for(i=2;i<7;++i) {
    digitalWrite(i,LOW);
    delay(WAIT);
    digitalWrite(i,HIGH);
    delay(WAIT);
  }
}
