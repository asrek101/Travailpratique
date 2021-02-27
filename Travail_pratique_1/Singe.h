#ifndef __SINGE_H__
#define __SINGE_H__

#include <iostream>

#include "Animaux.h"


class Singe : public Animaux
{
public:
	int type;
	Singe(std::string nom, float poids, bool type);
	void affiche();
	Diete diete();
	~Singe();
	std::string getnom();
};

#endif