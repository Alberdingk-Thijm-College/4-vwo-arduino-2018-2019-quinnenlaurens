int rood1 = 13;
int groen1 = 12;
int rood2 = 11;
int groen2 = 10;
int rood3 = 9;
int groen3 = 8;
int rood4 = 7;
int groen4 = 6;
int buslijnBlue = 4;
int buslijnBtn = 2;

int currentSL = 1;

void setup() {

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

  // Stoplicht Buslijn
  pinMode(buslijnBlue, OUTPUT);
  pinMode(buslijnBtn, INPUT);

}

void loop() {

  stoplichtActivate();
}

void stoplichtActivate() {

  if(currentSL == 1) {
    digitalWrite(groen1, HIGH);
    digitalWrite(rood1, LOW);
    digitalWrite(rood2, HIGH);
    digitalWrite(rood3, HIGH);
    digitalWrite(rood4, HIGH);
    delay(10000);
  
    digitalWrite(groen1, LOW);
    delay(1000);
    digitalWrite(groen1, HIGH);
    delay(1000);
    digitalWrite(groen1, LOW);
    delay(500);
    digitalWrite(groen1, HIGH);
    delay(500);
    digitalWrite(groen1, LOW);
    delay(500);
    digitalWrite(groen1, HIGH);
    delay(500);
    digitalWrite(groen1, LOW);
    delay(250);
    digitalWrite(groen1, HIGH);
    delay(250);
    digitalWrite(groen1, LOW);
    delay(250);
    digitalWrite(groen1, HIGH);
    delay(250);
    digitalWrite(groen1, LOW);
    delay(250);
    digitalWrite(groen1, HIGH);
    delay(250);
    digitalWrite(groen1, LOW);
    delay(250);
    digitalWrite(groen1, HIGH);
    delay(250);
    digitalWrite(groen1, LOW);
    delay(100);
    digitalWrite(groen1, HIGH);
    delay(100);
    digitalWrite(groen1, LOW);
    delay(100);
    digitalWrite(groen1, HIGH);
    delay(100);
    digitalWrite(groen1, LOW);
    delay(100);
    digitalWrite(groen1, HIGH);
    delay(100);
    digitalWrite(groen1, LOW);
    delay(100);
    digitalWrite(groen1, HIGH);
    delay(100);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);
    digitalWrite(groen1, LOW);
    delay(50);
    digitalWrite(groen1, HIGH);
    delay(50);

    digitalWrite(groen1, LOW);
    digitalWrite(rood1, HIGH);

    currentSL = 2;
  }

  if (currentSL == 2) {
    digitalWrite(groen2, HIGH);
    digitalWrite(rood1, HIGH);
    digitalWrite(rood2, LOW);
    digitalWrite(rood3, HIGH);
    digitalWrite(rood4, HIGH);
    delay(10000);
  
    digitalWrite(groen2, LOW);
    delay(1000);
    digitalWrite(groen2, HIGH);
    delay(1000);
    digitalWrite(groen2, LOW);
    delay(500);
    digitalWrite(groen2, HIGH);
    delay(500);
    digitalWrite(groen2, LOW);
    delay(500);
    digitalWrite(groen2, HIGH);
    delay(500);
    digitalWrite(groen2, LOW);
    delay(250);
    digitalWrite(groen2, HIGH);
    delay(250);
    digitalWrite(groen2, LOW);
    delay(250);
    digitalWrite(groen2, HIGH);
    delay(250);
    digitalWrite(groen2, LOW);
    delay(250);
    digitalWrite(groen2, HIGH);
    delay(250);
    digitalWrite(groen2, LOW);
    delay(250);
    digitalWrite(groen2, HIGH);
    delay(250);
    digitalWrite(groen2, LOW);
    delay(100);
    digitalWrite(groen2, HIGH);
    delay(100);
    digitalWrite(groen2, LOW);
    delay(100);
    digitalWrite(groen2, HIGH);
    delay(100);
    digitalWrite(groen2, LOW);
    delay(100);
    digitalWrite(groen2, HIGH);
    delay(100);
    digitalWrite(groen2, LOW);
    delay(100);
    digitalWrite(groen2, HIGH);
    delay(100);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);
    digitalWrite(groen2, LOW);
    delay(50);
    digitalWrite(groen2, HIGH);
    delay(50);

    digitalWrite(groen2, LOW);
    digitalWrite(rood2, HIGH);

    currentSL = 3;
  }

  if (currentSL == 3) {
    digitalWrite(groen3, HIGH);
    digitalWrite(rood1, HIGH);
    digitalWrite(rood2, HIGH);
    digitalWrite(rood3, LOW);
    digitalWrite(rood4, HIGH);
    delay(10000);
  
    digitalWrite(groen3, LOW);
    delay(1000);
    digitalWrite(groen3, HIGH);
    delay(1000);
    digitalWrite(groen3, LOW);
    delay(500);
    digitalWrite(groen3, HIGH);
    delay(500);
    digitalWrite(groen3, LOW);
    delay(500);
    digitalWrite(groen3, HIGH);
    delay(500);
    digitalWrite(groen3, LOW);
    delay(250);
    digitalWrite(groen3, HIGH);
    delay(250);
    digitalWrite(groen3, LOW);
    delay(250);
    digitalWrite(groen3, HIGH);
    delay(250);
    digitalWrite(groen3, LOW);
    delay(250);
    digitalWrite(groen3, HIGH);
    delay(250);
    digitalWrite(groen3, LOW);
    delay(250);
    digitalWrite(groen3, HIGH);
    delay(250);
    digitalWrite(groen3, LOW);
    delay(100);
    digitalWrite(groen3, HIGH);
    delay(100);
    digitalWrite(groen3, LOW);
    delay(100);
    digitalWrite(groen3, HIGH);
    delay(100);
    digitalWrite(groen3, LOW);
    delay(100);
    digitalWrite(groen3, HIGH);
    delay(100);
    digitalWrite(groen3, LOW);
    delay(100);
    digitalWrite(groen3, HIGH);
    delay(100);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);
    digitalWrite(groen3, LOW);
    delay(50);
    digitalWrite(groen3, HIGH);
    delay(50);

    digitalWrite(groen3, LOW);
    digitalWrite(rood3, HIGH);

    currentSL = 4;
  }

  if (currentSL == 4) {
    digitalWrite(groen4, HIGH);
    digitalWrite(rood1, HIGH);
    digitalWrite(rood2, HIGH);
    digitalWrite(rood3, HIGH);
    digitalWrite(rood4, LOW);
    delay(10000);
  
    digitalWrite(groen4, LOW);
    delay(1000);
    digitalWrite(groen4, HIGH);
    delay(1000);
    digitalWrite(groen4, LOW);
    delay(500);
    digitalWrite(groen4, HIGH);
    delay(500);
    digitalWrite(groen4, LOW);
    delay(500);
    digitalWrite(groen4, HIGH);
    delay(500);
    digitalWrite(groen4, LOW);
    delay(250);
    digitalWrite(groen4, HIGH);
    delay(250);
    digitalWrite(groen4, LOW);
    delay(250);
    digitalWrite(groen4, HIGH);
    delay(250);
    digitalWrite(groen4, LOW);
    delay(250);
    digitalWrite(groen4, HIGH);
    delay(250);
    digitalWrite(groen4, LOW);
    delay(250);
    digitalWrite(groen4, HIGH);
    delay(250);
    digitalWrite(groen4, LOW);
    delay(100);
    digitalWrite(groen4, HIGH);
    delay(100);
    digitalWrite(groen4, LOW);
    delay(100);
    digitalWrite(groen4, HIGH);
    delay(100);
    digitalWrite(groen4, LOW);
    delay(100);
    digitalWrite(groen4, HIGH);
    delay(100);
    digitalWrite(groen4, LOW);
    delay(100);
    digitalWrite(groen4, HIGH);
    delay(100);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);
    digitalWrite(groen4, LOW);
    delay(50);
    digitalWrite(groen4, HIGH);
    delay(50);

    digitalWrite(groen4, LOW);
    digitalWrite(rood3, HIGH);

    currentSL = 1;
  }
  
}