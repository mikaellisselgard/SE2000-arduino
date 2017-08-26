#include <Keyboard.h>

const int travelPinsLength = 14;
const int joystickPinsLength = 4;
const int languagePinsLength = 2;
int travelPins[travelPinsLength] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
char travelKeys[travelPinsLength] = { 'x', 'q', 's', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'l' };
int joystickPins[joystickPinsLength] = { A0, A1, A2, A3 };
int joystickKeys [joystickPinsLength] = { KEY_UP_ARROW, KEY_LEFT_ARROW, KEY_RIGHT_ARROW, KEY_DOWN_ARROW };
int languagePins[languagePinsLength] = { A4, A5 };
char languageKeys [languagePinsLength] = { 'c', 'v' };

void pressKey(char key, int duration) {
  Keyboard.press(key);
  Keyboard.releaseAll();
  delay(duration);
}

void setup() {
  for (int i = 0; i < travelPinsLength; i++) {
    pinMode(travelPins[i], INPUT_PULLUP);
  }

  for (int i = 0; i < joystickPinsLength; i++) {
    pinMode(joystickPins[i], INPUT_PULLUP);
  }

  for (int i = 0; i < languagePinsLength; i++) {
    pinMode(languagePins[i], INPUT_PULLUP);
  }

  Keyboard.begin();
}

void loop() {
  for (int i = 0; i < travelPinsLength; i++) {
    if (digitalRead(travelPins[i]) == LOW) { pressKey(travelKeys[i], 100); };
  }

  for (int i = 0; i < joystickPinsLength; i++) {
    if (digitalRead(joystickPins[i]) == LOW) { pressKey(joystickKeys[i], 0); };
  }

  for (int i = 0; i < languagePinsLength; i++) {
    if (digitalRead(languagePins[i]) == LOW) { pressKey(languageKeys[i], 100); };
  }

  delay(10);
}
