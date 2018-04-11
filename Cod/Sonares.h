#ifndef SONARES_H
#define SONARES_H

class Sonares{
public:
	bool viuObstaculo(int DISTANCIA_OBSTACULO){
		if (robo.lerSensorFrontal() <= DISTANCIA_OBSTACULO){
			return true;
		} else {
			return false;
		}
	}
};

#endif