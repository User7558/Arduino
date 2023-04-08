#define led1 8
#define led2 = 9
#define led3 10

void setup() {
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);

}

void vermelho (int tmp)
{
  digitalWrite(10, HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8, LOW);
  delay(tmp*1000);
}

void verde(int tmp)
{
  digitalWrite(10, LOW);
  digitalWrite(9,LOW);
  digitalWrite(8, HIGH);
  delay(tmp*1000);
}

void amarelo(int tmp)
{
  digitalWrite(10, LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8, LOW);
  delay(tmp*1000);
}

void loop() {
  vermelho(7);

  verde(9);

  amarelo(3);
}
