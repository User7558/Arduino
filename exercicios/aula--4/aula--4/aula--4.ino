//--OBJETIVO DESTA ATIVIDADE
//   Fazer com que o LED acenda ao pressionar o botão uma vez, e ao pressioná-lo denovo apague.

#define led 4
#define botao 3
int ligou = 0;
int desligou =0;

//----------------------------------
void trocaLed(){
  if (digitalRead(led) == HIGH){
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
  }
}

void keyUp(){
  if ((ligou == 1) and (desligou == 1)){
    ligou=0;
    desligou=0;
    trocaLed();
  }
}
//----------------------------------

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);

}

void loop() {
  if (digitalRead(botao) == HIGH){
    ligou=1;
    desligou=0;
  }
  else{
    desligou=1;
  }
  keyUp();
}
