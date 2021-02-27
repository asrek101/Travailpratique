#ifndef __SINGE_H__
#define __SINGE_H__

#include "Animaux.h"

class Singe : public Animaux
{
protected:
	int type;
public:
	
	Singe(std::string nom, float poids, bool type);
	void affiche();
	Diete diete();
	~Singe();
	std::string getnom();
};

#endif