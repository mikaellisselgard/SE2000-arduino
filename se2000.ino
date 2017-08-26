#include <Keyboard.h>

int sun = 0;
int mercury = 1;
int venus = 2;
int earth = 3;
int iss = 4;
int mars = 5;
int jupiter = 6;
int asteroids = 7;
int saturn = 8;
int uranus = 9;
int neptune = 10;
int plutoids = 11;
int start = 12;
int landing = 13;

int joystick_up = A0;
int joystick_right = A1;
int joystick_down = A2;
int joystick_left = A3;
int swedish = A4;
int english = A5;

void pressKey(char key, int duration) {
  Keyboard.press(key);
  Keyboard.releaseAll();
  delay(duration);
}

void setup() {
  pinMode(start, INPUT_PULLUP);
  pinMode(landing, INPUT_PULLUP);
  pinMode(sun, INPUT_PULLUP);
  pinMode(mercury, INPUT_PULLUP);
  pinMode(venus, INPUT_PULLUP);
  pinMode(earth, INPUT_PULLUP);
  pinMode(mars, INPUT_PULLUP);
  pinMode(asteroids, INPUT_PULLUP);
  pinMode(jupiter, INPUT_PULLUP);
  pinMode(saturn, INPUT_PULLUP);
  pinMode(uranus, INPUT_PULLUP);
  pinMode(neptune, INPUT_PULLUP);
  pinMode(plutoids, INPUT_PULLUP);
  pinMode(iss, INPUT_PULLUP);
  pinMode(joystick_left, INPUT_PULLUP);
  pinMode(joystick_right, INPUT_PULLUP);
  pinMode(joystick_up, INPUT_PULLUP);
  pinMode(joystick_down, INPUT_PULLUP);
  pinMode(swedish, INPUT_PULLUP);
  pinMode(english, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(start) == LOW ) { pressKey('x', 100); };
  if (digitalRead(landing) == LOW ) { pressKey('q', 100); };
  if (digitalRead(sun) == LOW ) { pressKey('s', 100); };
  if (digitalRead(mercury) == LOW ) { pressKey('w', 100); };
  if (digitalRead(venus) == LOW ) { pressKey('e', 100); };
  if (digitalRead(earth) == LOW ) { pressKey('r', 100); };
  if (digitalRead(mars) == LOW ) { pressKey('t', 100); };
  if (digitalRead(asteroids) == LOW ) { pressKey('a', 100); };
  if (digitalRead(jupiter) == LOW ) { pressKey('y', 100); };
  if (digitalRead(saturn) == LOW ) { pressKey('i', 100); };
  if (digitalRead(uranus) == LOW ) { pressKey('i', 100); };
  if (digitalRead(neptune) == LOW ) { pressKey('o', 100); };
  if (digitalRead(iss) == LOW ) { pressKey('p', 100); };
  if (digitalRead(plutoids) == LOW ) { pressKey('l', 100); };
  if (digitalRead(joystick_left) == LOW ) { pressKey(KEY_UP_ARROW, 0); };
  if (digitalRead(joystick_up) == LOW ) { pressKey(KEY_LEFT_ARROW, 0); };
  if (digitalRead(joystick_right) == LOW ) { pressKey(KEY_RIGHT_ARROW, 0); };
  if (digitalRead(joystick_down) == LOW ) { pressKey(KEY_DOWN_ARROW, 0); };

  delay(10);
}
