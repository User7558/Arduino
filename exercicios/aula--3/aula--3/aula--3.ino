#define verde 3
#define verm 6
#define azul 5
#define max 128
#define min 0

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(verm, OUTPUT);
  pinMode(azul, OUTPUT);

}

void loop() {
  for (int c=min; c<max; c++){
    analogWrite(verde, c);
  }
  delay(400);
  
  for(int c=max; c>min; c--){
    analogWrite(verde, c);
  }
  delay(200);

  for (int c=min; c<max; c++){
    analogWrite(verm, c);
  }
  delay(400);
  
  for(int c=max; c>min; c--){
    analogWrite(verm, c);
  }
  delay(200);

  for (int c=min; c<max; c++){
    analogWrite(azul, c);
  }
  delay(400);
  
  for(int c=max; c>min; c--){
    analogWrite(azul, c);
  }
  delay(200);
}
