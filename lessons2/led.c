int a=0;
void setup()
{
  for(a=0;a<4;a++)
  {  
    pinMode(a, OUTPUT);
  }
}

void loop()
{
  for(a=0;a<4;a++)
  {
    digitalWrite(a, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(a, LOW);
    delay(200); // Wait for 1000 millisecond(s)
  }
}
