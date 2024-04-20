const int motorPin = 9; // Pin connected to the motor

void setup() {
  // Set motor pin as an output
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Change motor speed from 0 to 255 (0% to 100% duty cycle)
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(motorPin, speed); // Set PWM duty cycle
    delay(10); // Delay for smooth speed change
  }

  // Change motor speed from 255 to 0 (100% to 0% duty cycle)
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(motorPin, speed); // Set PWM duty cycle
    delay(10); // Delay for smooth speed change
  }
}
