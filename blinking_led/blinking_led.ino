int PIN_SW = 7;
int PIN_LED = 8;

// Andrew Toader - Added my name from Andrew-Branch
// Zack Benning - Added my name from Zack-Branch

void setup()
{
  /* Setup code
   * PIN7 is INPUT (SW2)
   * PIN8 is OUTPUT (LED)
   */
  pinMode(PIN_SW, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_LED, LOW);
  
  // Check if switch is pressed, and if it is, blink LED
  if(digitalRead(PIN_SW) == HIGH)
  {
    digitalWrite(PIN_LED, HIGH);
    delay(5);
    digitalWrite(PIN_LED, LOW);
    delay(5);
  }
}
