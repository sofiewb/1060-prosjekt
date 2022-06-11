// Knapp og vibrering til side 1
int knapp1 = 2;
int vibrering1 = 3;

// Knapp og vibrering til side 2
int knapp2 = 4;
int vibrering2 = 5;

// Knapp og vibrering til side 3
int knapp3 = 6;
int vibrering3 = 7;

// Stor knapp og lys
int arcadeKnapp = 9;
int led = 8;

void setup()
{
  // Definerer pinMode for de ulkike komponentene
  pinMode(knapp1, INPUT_PULLUP);
  pinMode(vibrering1, OUTPUT);
  pinMode(knapp2, INPUT_PULLUP);
  pinMode(vibrering2, OUTPUT);
  pinMode(knapp3, INPUT_PULLUP);
  pinMode(vibrering3, OUTPUT);
  pinMode(arcadeKnapp, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
  //Sjekker om noen av knappene blir tykket på
  vibreringstrykk(knapp1, vibrering1);
  vibreringstrykk(knapp2, vibrering2);
  vibreringstrykk(knapp3, vibrering3);
  arcadetrykk(arcadeKnapp, led);
}

// Når vibreringsknappene trykkes ned vibrerer siden knappen er på
void vibreringstrykk(int knapp, int vibrering)
{
  if(digitalRead(knapp) == LOW)
  {
   digitalWrite(vibrering, HIGH);
    delay(10);
  }
  if(digitalRead(knapp) == HIGH)
  {
   digitalWrite(vibrering, LOW);
   delay(10);
  }
}

// Når arkadeknappen trykkes ned lyser den
void arcadetrykk(int arcadeknapp, int led)
{
 if(digitalRead(arcadeKnapp) == LOW)
  {
   digitalWrite(led, HIGH);
   delay(10);
  }
 if(digitalRead(arcadeKnapp) == HIGH)
  {
   digitalWrite(led, LOW);
   delay(10);
  }
}
