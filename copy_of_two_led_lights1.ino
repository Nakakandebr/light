int ledLight = 13;
int ledLight2 = 12;
void setup()
{
  pinMode(ledLight, OUTPUT);
  pinMode(ledLight2, OUTPUT);
}

void loop()
{
  digitalWrite(ledLight, HIGH);
  digitalWrite(ledLight2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledLight, LOW);
  digitalWrite(ledLight2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}