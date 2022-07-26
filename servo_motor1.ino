
//
#include <Servo.h>

int push = 0;

int i = 0;

int j = 0;

Servo servo_9;

void setup()
{
  pinMode(4, INPUT);
  Serial.begin(9600);
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  push = digitalRead(4);
  Serial.println(push);
  if (push == 1) {
    for (push = 1; push <= 180; push += 1) {
      servo_9.write(push);
      delay(10); // Wait for 5 millisecond(s)
    }
    for (push = 180; push >= 1; push -= 1) {
      servo_9.write(push);
      delay(10); // Wait for 5 millisecond(s)
    }
  } else {
    servo_9.write(0);
  }
}