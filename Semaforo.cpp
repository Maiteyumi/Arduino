// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);//Led Vermelho
  pinMode(12, OUTPUT);//Led Amarelo
  pinMode(11, OUTPUT);//Led Verde
}

void loop()
{
  digitalWrite(13, HIGH);//Liga Led Vermelho
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);//Desliga Led Vermelho

digitalWrite(12, HIGH);//Liga Led Amarelo
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(12, LOW);//Desliga Led Amarelo

digitalWrite(11, HIGH);//Liga Led Verde
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(11, LOW);//Desliga Led Verde

 
}
