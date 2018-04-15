#ifndef LEDS_H
#define LEDS_H

class Leds {
public:
	void pinar(){
		// Futuro uso para comunicação por leds

		/*pinMode(LED_maisEsq, OUTPUT);		
		pinMode(LED_Esq, OUTPUT);
		pinMode(LED_Dir, OUTPUT);
		pinMode(LED_maisDir, OUTPUT);*/ 
		
		pinMode(10, OUTPUT);
		pinMode(11, OUTPUT);
	}

	/*
	void piscar(int led){
		switch (led) {
			case 1: // maisEsq viu preto.
				digitalWrite(LED_maisEsq, HIGH);
				delay(500);
				digitalWrite(LED_maisEsq, LOW);
				break;
			case 2:
				digitalWrite(LED_Esq, HIGH);
				delay(500);
				digitalWrite(LED_Esq, LOW);
				break;
			case 3:
				digitalWrite(LED_Dir, HIGH);
				delay(500);
				digitalWrite(LED_Dir, LOW);
				break;
			case 4:
				digitalWrite(LED_maisDir, HIGH);
				delay(500);
				digitalWrite(LED_maisDir, LOW);
				break;
		}
	}*/
};

#endif