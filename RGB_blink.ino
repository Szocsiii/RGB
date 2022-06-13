const int buttonPin = 3;
const int red = 11;
const int green = 10;
const int blue = 9;
int counter = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  int buttonState;
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    counter++;
    delay(150);
  }
  
  else if (counter == 0) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  
  else if (counter == 1) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  
  else if (counter == 2) {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  
  else if (counter == 3) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  
  else {
    counter = 0;
  }
}
