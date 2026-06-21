int startValue = 5;
int ledPin = 4;

void flashLED(int times) {
  int flashCount = 0;
  while (flashCount < times) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    flashCount = flashCount + 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);   // blink LED 'count' times
    delay(1000);       // wait 1 second

    count = count - 1; // countdown step
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // empty — runs once in setup()
}