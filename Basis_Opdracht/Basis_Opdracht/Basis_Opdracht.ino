int rood1 = 13;
int groen1 = 12;
int rood2 = 11;
int groen2 = 10;
int rood3 = 9;
int groen3 = 8;
int rood4 = 7;
int groen4 = 6;

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

}

void loop() {

  sl1();
  sl2();
  sl3();
  sl4();

}

// stoplicht 1
void sl1(){

  digitalWrite(rood1, LOW);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, HIGH);
  digitalWrite(groen1, HIGH);
  delay(10000);
  digitalWrite(groen1, LOW);
  delay(500);
  digitalWrite(groen1, HIGH);
  delay(500);
  digitalWrite(groen1, LOW);
  delay(500);
  digitalWrite(groen1, HIGH);
  delay(500);
  digitalWrite(groen1, LOW);
  delay(500);
  digitalWrite(groen1, HIGH);
  delay(500);
  digitalWrite(groen1, LOW);
  delay(500);
  digitalWrite(rood1, HIGH);
  
}

// stoplicht 2
void sl2(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, LOW);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, HIGH);
  digitalWrite(groen2, HIGH);
  delay(10000);
  digitalWrite(groen2, LOW);
  delay(500);
  digitalWrite(groen2, HIGH);
  delay(500);
  digitalWrite(groen2, LOW);
  delay(500);
  digitalWrite(groen2, HIGH);
  delay(500);
  digitalWrite(groen2, LOW);
  delay(500);
  digitalWrite(groen2, HIGH);
  delay(500);
  digitalWrite(groen2, LOW);
  delay(500);
  digitalWrite(rood2, HIGH);
  
}

// stoplicht 3
void sl3(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, LOW);
  digitalWrite(rood4, HIGH);
  digitalWrite(groen3, HIGH);
  delay(10000);
  digitalWrite(groen3, LOW);
  delay(500);
  digitalWrite(groen3, HIGH);
  delay(500);
  digitalWrite(groen3, LOW);
  delay(500);
  digitalWrite(groen3, HIGH);
  delay(500);
  digitalWrite(groen3, LOW);
  delay(500);
  digitalWrite(groen3, HIGH);
  delay(500);
  digitalWrite(groen3, LOW);
  delay(500);
  digitalWrite(rood3, HIGH);
  
}

// stoplicht 4
void sl4(){

  digitalWrite(rood1, HIGH);
  digitalWrite(rood2, HIGH);
  digitalWrite(rood3, HIGH);
  digitalWrite(rood4, LOW);
  digitalWrite(groen4, HIGH);
  delay(10000);
  digitalWrite(groen4, LOW);
  delay(500);
  digitalWrite(groen4, HIGH);
  delay(500);
  digitalWrite(groen4, LOW);
  delay(500);
  digitalWrite(groen4, HIGH);
  delay(500);
  digitalWrite(groen4, LOW);
  delay(500);
  digitalWrite(groen4, HIGH);
  delay(500);
  digitalWrite(groen4, LOW);
  delay(500);
  digitalWrite(rood4, HIGH);
  
}
