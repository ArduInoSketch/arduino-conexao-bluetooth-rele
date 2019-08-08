#include <SoftwareSerial.h>
SoftwareSerial BT(9, 10); //PINOS RX , TX
#define LED_ON 6
#define LED_OFF 7
#define RELE 11
int readBT;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(RELE, OUTPUT);
  pinMode(LED_ON, OUTPUT);
  pinMode(LED_OFF, OUTPUT);
  digitalWrite(RELE, HIGH); //INICIA VENTUINHA EM MODO HIGH, POIS OS RELES SAO ATIVADOS EM NIVEL BAIXO (LOW)
}

void loop() {
  if (BT.available() > 0) {
    Serial.println("CONEXAO FEITA!");
    readBT = BT.read();
    switch (readBT) {
      case 'l':
      case 'L':
        digitalWrite(LED_ON, HIGH);
        digitalWrite(LED_OFF, LOW);
        digitalWrite(RELE, LOW);
        BT.println("VENTUINHA LIGADA!");
        break;
      case 'd':
      case 'D':
        digitalWrite(LED_ON, LOW);
        digitalWrite(LED_OFF, HIGH);
        digitalWrite(RELE, HIGH);
        BT.println("VENTUINHA DESLIGADA!");
        break;
      default:
        BT.println("COMANDO INVALIDO! TENTE D (DESLIGADO) OU L (LIGADO)");
    }
  } else {
    Serial.println("NÃO FOI POSSIVEL FAZER A CONEXAO!");
  }
}
