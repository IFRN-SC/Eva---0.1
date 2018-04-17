#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include <robo_hardware.h>

class Calibracao {
public:

	void run();
	float getSeparacao(){ return (media); }
	
	float media; 

	Calibracao();
	
private:


	void menuCalibracao();
	void esperarParaLer();

	void minimoBranco();
	void maximoPreto();
	
	bool estiverCalibrando;
};

#endif