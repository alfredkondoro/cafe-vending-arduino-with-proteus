#include <LiquidCrystal.h>
#define MachSen A2
#define TeaPin 4
#define CoffeePin 5
#define TeaSen 6
#define CoffeeSen 7
LiquidCrystal Machlcd(13,12,11,10,9,8);
void setup() {
  Serial.begin(9600);
  pinMode(MachSen, INPUT);
  pinMode(TeaPin, OUTPUT);
  pinMode(CoffeePin, OUTPUT);
  digitalWrite(MachSen, LOW);

  Machlcd.begin(16,2);
  Machlcd.setCursor(0,0);
  Machlcd.print("Cafe Vending");
}

void loop() {
  if(digitalRead(MachSen)){
    Machlcd.setCursor(0,0);
    Machlcd.print("Welcome");
    Machlcd.setCursor(0,1);
    Machlcd.print("Kindly make a choice");
      if(digitalRead(TeaSen)){
        digitalWrite(TeaPin, HIGH);
        delay(3000);
        }
      if(digitalRead(CoffeeSen)){
        digitalWrite(CoffeePin, HIGH);
        delay(3000);
        }
    }
}
