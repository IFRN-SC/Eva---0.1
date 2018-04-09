#ifndef SETUP_H
#define SETUP_H

#include <robo_hardwareEva.h>
/*
# <Arduino.h>
# <Servo.h>

# "cor.h"
# "pinagem.h"
# "Ultrasonic.h"

# "EEPROM2.h"
*/
#include "Calibracao.h"
#include "Sensores.h"
#include "Sonares.h"
#include "Movimentacao.h"
#include "Leds.h"


class Setup{
public: 
	void leds(bool value);
	void calibrar(bool value);
};

//static Setup set;

#endif
