#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int PIR_PIN = 13; 
bool schermAan = false;

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  
  lcd.init();
  lcd.noBacklight(); // Begin met scherm UIT
  lcd.clear();

  Serial.println("Wachten op sensor stabilisatie (10 sec)...");
  delay(10000); 
  Serial.println("Systeem is actief!");
}

void loop() {
  int pirStatus = digitalRead(PIR_PIN);

  if (pirStatus == HIGH) {
    // Er is beweging!
    if (!schermAan) {
      // Alleen uitvoeren als het scherm nog niet aan stond
      Serial.println("Beweging gedetecteerd! Scherm AAN.");
      lcd.backlight();
      lcd.setCursor(0, 0);
      lcd.print("Hallo Lenn!");
      lcd.setCursor(0, 1);
      lcd.print("Spiegel is actief");
      schermAan = true;
    }
  } else {
    // Geen beweging meer (Sensor is LOW)
    if (schermAan) {
      // Alleen uitvoeren als het scherm nog aan stond
      Serial.println("Geen beweging meer. Scherm UIT.");
      lcd.clear();
      lcd.noBacklight();
      schermAan = false;
    }
  }

  delay(100); // Kleine pauze voor stabiliteit
}