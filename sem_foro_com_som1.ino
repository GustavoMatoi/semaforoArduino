// C++ code
//
const int buzzer = 13;
void setup()
{
  pinMode(4, OUTPUT); //verde
  pinMode(3, OUTPUT); //amarelo
  pinMode(2, OUTPUT); //vermelho
  pinMode(buzzer,OUTPUT); //buzzer

}

void loop()
{
  digitalWrite(4, HIGH);
  tone(buzzer, 400);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)
    
  digitalWrite(3, HIGH);
  tone(buzzer, 300);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)
    
  digitalWrite(2, HIGH);
  tone(buzzer, 200);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  noTone(buzzer);
  delay(1000); // Wait for 1000 millisecond(s)
}