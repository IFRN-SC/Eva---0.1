#ifndef SONARES_H
#define SONARES_H

#include <robo_hardware.h>

class Sonares {
public:
	bool viuObstaculo(int DISTANCIA_OBSTACULO){
		if (robo.lerSensorSonarFrontal() <= DISTANCIA_OBSTACULO){
			return true;
		} else {
			return false;
		}
	}
};

#endif