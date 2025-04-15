#ifndef LedToggle_h
#define LedToggle_h

#include "Arduino.h"

class LedToggle {
	public:
		LedToggle(int pin);
		LedToggle(int pin, unsigned long delayTimer)
		void toggle();
	
	private:
		int _pin;
		bool _state;
};

#endif
