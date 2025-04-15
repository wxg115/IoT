#include "LedToggle.h"

LedToggle::LedToggle(int pin) {
	_pin = pin;
	_delayTimer = 0;
	_state = false;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

LedToggle::LedToggle(int pin, unsigned long delayTimer) {
	_pin = pin;
	_state = false;
	_delayTimer = delayTimer;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
}

void LedToggle::toggle() {
	if (_delayTimer > 0) {
		delay(_delayTimer);
	}
	_state = !_state;
	digitalWrite(_pin, _state ? HIGH : LOW);
}
