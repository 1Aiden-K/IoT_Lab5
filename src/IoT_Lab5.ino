/*
 * Project IoT_Lab5
 * Description: 
 * Author:
 * Date:
 */

SYSTEM_MODE(MANUAL)
SYSTEM_THREAD(ENABLED)

#define LED D5
#define LIGHT A5

int bottom = 4000;
int top = 10;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LIGHT, INPUT);\
}

void loop() {
  int lightAmount = analogRead(LIGHT);
  bottom = min(bottom, lightAmount);
  top = max(top, lightAmount);
  analogWrite(LED, map(lightAmount, bottom, top, 0, 255));
}