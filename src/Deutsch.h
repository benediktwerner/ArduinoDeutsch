#define LESEN INPUT
#define SCHREIBEN OUTPUT

#define EINGEBAUTE_LED LED_BUILTIN

void digitalSchreiben(int pin, int value) {
	digitalWrite(pin, value);
}

int digitalLesen(int pin) {
	return digitalRead(pin);
}

void warten(int ms) {
	delay(ms);
}

int analogLesen(int pin) {
	return analogRead(pin);
}