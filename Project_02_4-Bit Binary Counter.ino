// Pin Definitions
const int pin4 = 2; 
const int pin3 = 3;
const int pin2 = 4;
const int pin1 = 5; 
const int dTime = 1000;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // 0 (0000)
  digitalWrite(pin4, LOW); digitalWrite(pin3, LOW); digitalWrite(pin2, LOW); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 1 (0001)
  digitalWrite(pin4, LOW); digitalWrite(pin3, LOW); digitalWrite(pin2, LOW); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 2 (0010)
  digitalWrite(pin4, LOW); digitalWrite(pin3, LOW); digitalWrite(pin2, HIGH); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 3 (0011)
  digitalWrite(pin4, LOW); digitalWrite(pin3, LOW); digitalWrite(pin2, HIGH); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 4 (0100)
  digitalWrite(pin4, LOW); digitalWrite(pin3, HIGH); digitalWrite(pin2, LOW); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 5 (0101)
  digitalWrite(pin4, LOW); digitalWrite(pin3, HIGH); digitalWrite(pin2, LOW); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 6 (0110)
  digitalWrite(pin4, LOW); digitalWrite(pin3, HIGH); digitalWrite(pin2, HIGH); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 7 (0111)
  digitalWrite(pin4, LOW); digitalWrite(pin3, HIGH); digitalWrite(pin2, HIGH); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 8 (1000)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, LOW); digitalWrite(pin2, LOW); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 9 (1001)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, LOW); digitalWrite(pin2, LOW); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 10 (1010)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, LOW); digitalWrite(pin2, HIGH); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 11 (1011)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, LOW); digitalWrite(pin2, HIGH); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 12 (1100)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin2, LOW); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 13 (1101)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin2, LOW); digitalWrite(pin1, HIGH);
  delay(dTime);
  
  // 14 (1110)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin2, HIGH); digitalWrite(pin1, LOW);
  delay(dTime);
  
  // 15 (1111)
  digitalWrite(pin4, HIGH); digitalWrite(pin3, HIGH); digitalWrite(pin2, HIGH); digitalWrite(pin1, HIGH);
  delay(dTime);
}