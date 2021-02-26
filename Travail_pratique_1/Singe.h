#ifndef __SINGE_H__
#define __SINGE_H__

#include <iostream>

#include "Animaux.h"


class Singe : public Animaux
{
public:
	int type;
	Singe(std::string nom, float poids, int type);
	void affiche();
	Diete diete();
	~Singe();
};

#endif