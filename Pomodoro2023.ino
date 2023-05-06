
#include "TM1637.h"
#include "math.h"
#define CLK A5 //pins definitions for TM1637 and can be changed to other ports
#define DIO A4

TM1637 tm1637(CLK, DIO);
int a, b, c, d, x = 0;
float val;
float pi = 3.1415;
int digito0 , digito1 , digito2,  digito3 = 0  ;

// BIP
bool bip_ON = 1;

// menu variables
int menuX = 2;
int menuY = 0;

// estabilidade
int debouncing = 10;
//0;

void setup() {
  tm1637.init();
  tm1637.set(6);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
  Serial.begin(9600);

  // Botoes
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, OUTPUT);
  digitalWrite(5, LOW);
  pinMode(4, OUTPUT);
  digitalWrite(5, LOW);
  tm1637.point(POINT_OFF);
  tm1637.display(1, 0);
  tm1637.display(2, 0);
  tm1637.display(3, 0);

}
void loop() {

  if (digitalRead(12) == 1) {

    ++menuX;
    if (menuX > 2)menuX = 3;

    glow(menuX); bip(bip_ON, debouncing);
    while (digitalRead(12) == 1) {
      delay(1);
    }
  }
  if (digitalRead(11) == 1) {
    menuY = -1;
    menu(menuX, menuY);
    menuY = 0;
    delay(debouncing); bip(bip_ON, debouncing);
    while (digitalRead(11) == 1) {
      delay(1);
    }


  }
  if (digitalRead(8) == 1) {
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    countDown();


  }
  if (digitalRead(7) == 1) {
    menuY = 1;
    menu(menuX, menuY);
    menuY = 0;
    delay(debouncing); bip(bip_ON, debouncing);
    while (digitalRead(7) == 1) {
      delay(1);
    }

  }
  if (digitalRead(6) == 1) {

    --menuX;
    if (menuX < 0)menuX = 0;

    glow(menuX); bip(bip_ON, debouncing);
    while (digitalRead(6) == 1) {
      delay(1);
    }
  }

  delay(5);

}
