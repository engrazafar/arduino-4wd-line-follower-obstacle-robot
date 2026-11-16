const int leftIn1= 8;
const int leftIn2=9;
const int rightIn3= 10;
const int rightIn4= 11;
void setup() { 
  pinMode(leftIn1, OUTPUT);
  pinMode(leftIn2, OUTPUT);
  pinMode(rightIn3, OUTPUT);
  pinMode(rightIn4, OUTPUT);
}
void loop(){ 
  digitalWrite(leftIn1, HIGH);
  digitalWrite(leftIn2, LOW);
  digitalWrite(rightIn3, HIGH);
  digitalWrite(rightIn4, LOW);
  delay(3000);
  digitalWrite(leftIn1, LOW);
  digitalWrite(leftIn2, LOW);
  digitalWrite(rightIn3, LOW);
  digitalWrite(rightIn4, LOW);
  delay(1000);
  digitalWrite(leftIn1, LOW);
  digitalWrite(leftIn2, HIGH);
  digitalWrite(rightIn3, LOW);
  digitalWrite(rightIn4, HIGH);
  delay(2000);
   digitalWrite(leftIn1, LOW);
  digitalWrite(leftIn2, LOW);
  digitalWrite(rightIn3, LOW);
  digitalWrite(rightIn4, LOW);
  delay(2000);
}
