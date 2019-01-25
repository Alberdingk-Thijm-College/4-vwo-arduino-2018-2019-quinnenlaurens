int button = 2;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(button, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    Serial.println("BUTTON IS HIGH");
  } else { 
    Serial.println("BUTTON IS LOW");
  }


}
