// Member Miran
const int LEDPin = LED_BUILTIN;
const int LEDPin1 =  9;
const int LEDPin2 = 11;

int State1 = LOW;
int State2 = LOW;
int State3 = HIGH;

unsigned long PrevMillis = 0;          

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  unsigned long CurMillis = millis();
  if (CurMillis - PrevMillis >= interval) {
    PrevMillis = CurMillis;
    if(State1 == LOW && State2 == HIGH) {
      State1 = LOW;
      State2 = LOW;
      State3 = HIGH;
    } else if (State1 == HIGH && State3 == LOW) {
      State1 = LOW;
      State2 = HIGH;
      State3 = LOW;
    } else if(State3 == HIGH && State2 == LOW) {
      State1 = HIGH;
      State2 = LOW;
      State3 = LOW;
    }

    digitalWrite(LEDPin, State1);
    digitalWrite(LEDPin1, State2);
    digitalWrite(LEDPin2, State3); 
  }
}
