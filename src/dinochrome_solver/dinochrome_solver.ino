#include <Servo.h>
#define SERVO_PIN 3
Servo spaceServo;

#define SENSOR_PIN A0

#define SERIAL_BAUD_RATE 9600

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
  spaceServo.attach(SERVO_PIN);
}

void loop() {
  int analogValue = analogRead(SENSOR_PIN);
  Serial.println(analogValue);
  if(analogValue > 450) {
    spaceServo.write(50);
  } else {
    spaceServo.write(0);
  }
}
