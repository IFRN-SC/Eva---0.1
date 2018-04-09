#ifndef LEDS_H
#define LEDS_H

class Leds {
public:
	void pinar(){
		pinMode(10, OUTPUT);
		pinMode(11, OUTPUT);
	}
};

static Leds leds; // Uso geral!

#endif