void setup()
{
  pinMode(42, OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  digitalWrite(42, HIGH);
  digitalWrite(6,LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(42, LOW);
  digitalWrite(6,HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  
}
