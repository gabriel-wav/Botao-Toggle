int botao = 4;
int ledvd = 0;
bool statusBotao = 0;


void setup() {
 pinMode (ledvd, OUTPUT);
 pinMode (botao, INPUT);

}

void loop() {
  statusBotao = digitalRead(botao);
  if (statusBotao == HIGH)
  {
    digitalWrite(ledvd, HIGH);
  }
  else
  {
    digitalWrite(ledvd, LOW);
  }
  }