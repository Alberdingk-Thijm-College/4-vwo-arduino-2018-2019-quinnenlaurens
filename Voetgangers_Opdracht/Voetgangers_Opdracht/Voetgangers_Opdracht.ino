int rood1 = 13;
int groen1 = 12;
int rood2 = 11;
int groen2 = 10;
int rood3 = 9;
int groen3 = 8;
int rood4 = 7;
int groen4 = 6;

int vgRood = 5;
int vgGroen = 4;
int vgBtn = 3;
int vgBtnState = 0;
int vgAct = 0;

void setup() {
  // put your setup code here, to run once:

  // Stoplicht 1
  pinMode(rood1, OUTPUT);
  pinMode(groen1, OUTPUT);

  // Stoplicht 2
  pinMode(rood2, OUTPUT);
  pinMode(groen2, OUTPUT);

  // Stoplicht 3
  pinMode(rood3, OUTPUT);
  pinMode(groen3, OUTPUT);

  // Stoplicht 4
  pinMode(rood4, OUTPUT);
  pinMode(groen4, OUTPUT);

  // Voetgangers
  pinMode(vgRood, OUTPUT);
  pinMode(vgGroen, OUTPUT);
  pinMode(vgBtn, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Stoplicht 1
  vgBtnState = digitalRead(vgBtn);
  if (vgBtnState == HIGH || vgAct == 1) {
    vgSl();
    vgAct = 0;
  } else {
    sl1();
  }

  // stoplicht 2
  vgBtnState = digitalRead(vgBtn);
  if (vgBtnState == HIGH || vgAct == 1) {
    vgSl();
    vgAct = 0;
  } else {
    sl2();
  }

  // stoplicht 3
  vgBtnState = digitalRead(vgBtn);
  if (vgBtnState == HIGH || vgAct == 1) {
    vgSl();
    vgAct = 0;
  } else {
    sl3();
  }

  // stoplicht 4
  vgBtnState = digitalRead(vgBtn);
  if (vgBtnState == HIGH || vgAct == 1) {
    vgSl();
    vgAct = 0;
  } else {
    sl4();
  }

}

void wait(int secs) {

  for (int i = 0; i <= secs; i++) {
    vgBtnState = digitalRead(vgBtn);
    // Leest of de voetgangers knop is ingedrukt.
    if (vgBtnState == HIGH) {
      if (vgAct == 0) {
        vgAct = 1;
        Serial.println("Voetgangers is geactiveerd!");
      } else if (vgAct = 1) {
        vgAct = 1;
        Serial.println("Voetgangers is geactiveerd!");
      }
    }
    delay(1);
  } 
  secs = 0;
}


// stoplicht 1
void sl1(){

  digitalWrite(rood1, LOW);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, HIGH);
  digitalWrite(vgRood, HIGH);
  digitalWrite(groen1, HIGH);
  wait(10000);
  digitalWrite(groen1, LOW);
  wait(500);
  digitalWrite(groen1, HIGH);
  wait(500);
  digitalWrite(groen1, LOW);
  wait(500);
  digitalWrite(groen1, HIGH);
  wait(500);
  digitalWrite(groen1, LOW);
  wait(500);
  digitalWrite(groen1, HIGH);
  wait(500);
  digitalWrite(groen1, LOW);
  wait(500);
  digitalWrite(rood1, HIGH);
  
}

// stoplicht 2
void sl2(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, LOW);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, HIGH);
  digitalWrite(vgRood, HIGH);
  digitalWrite(groen2, HIGH);
  wait(10000);
  digitalWrite(groen2, LOW);
  wait(500);
  digitalWrite(groen2, HIGH);
  wait(500);
  digitalWrite(groen2, LOW);
  wait(500);
  digitalWrite(groen2, HIGH);
  wait(500);
  digitalWrite(groen2, LOW);
  wait(500);
  digitalWrite(groen2, HIGH);
  wait(500);
  digitalWrite(groen2, LOW);
  wait(500);
  digitalWrite(rood2, HIGH);
  
}

// stoplicht 3
void sl3(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, LOW);
  digitalWrite(rood4, HIGH);
  digitalWrite(vgRood, HIGH);
  digitalWrite(groen3, HIGH);
  wait(10000);
  digitalWrite(groen3, LOW);
  wait(500);
  digitalWrite(groen3, HIGH);
  wait(500);
  digitalWrite(groen3, LOW);
  wait(500);
  digitalWrite(groen3, HIGH);
  wait(500);
  digitalWrite(groen3, LOW);
  wait(500);
  digitalWrite(groen3, HIGH);
  wait(500);
  digitalWrite(groen3, LOW);
  wait(500);
  digitalWrite(rood3, HIGH);
  
}

// stoplicht 4
void sl4(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, LOW);
  digitalWrite(vgRood, HIGH);
  digitalWrite(groen4, HIGH);
  wait(10000);
  digitalWrite(groen4, LOW);
  wait(500);
  digitalWrite(groen4, HIGH);
  wait(500);
  digitalWrite(groen4, LOW);
  wait(500);
  digitalWrite(groen4, HIGH);
  wait(500);
  digitalWrite(groen4, LOW);
  wait(500);
  digitalWrite(groen4, HIGH);
  wait(500);
  digitalWrite(groen4, LOW);
  wait(500);
  digitalWrite(rood4, HIGH);
  
}

// voetgangers stoplicht
void vgSl(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, HIGH);
  digitalWrite(vgRood, LOW);
  digitalWrite(vgGroen, HIGH);
  wait(10000);
  digitalWrite(vgGroen, LOW);
  wait(500);
  digitalWrite(vgGroen, HIGH);
  wait(500);
  digitalWrite(vgGroen, LOW);
  wait(500);
  digitalWrite(vgGroen, HIGH);
  wait(500);
  digitalWrite(vgGroen, LOW);
  wait(500);
  digitalWrite(vgGroen, HIGH);
  wait(500);
  digitalWrite(vgGroen, LOW);
  wait(500);
  digitalWrite(vgRood, HIGH);
  
}
