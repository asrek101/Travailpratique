#ifndef __Rhinoceros_H__
#define __Rhinoceros_H__

#include <iostream>

#include "Animaux.h"


class Rhinoceros : public Animaux
{
public:
	int espace;
	Rhinoceros(std::string nom, float poids, int espace);
	void affiche();
	Diete diete();
	~Rhinoceros();
	std::string getnom();
};

#endif