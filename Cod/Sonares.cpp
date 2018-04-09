#include "Sonares.h"

bool Sonares::viuObstaculo(int DISTANCIA_OBSTACULO){
	if (robo.lerSensorFrontal() <= DISTANCIA_OBSTACULO){
		return true;
	} else {
		return false;
	}
}