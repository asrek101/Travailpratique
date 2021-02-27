#ifndef __Rhinoceros_H__
#define __Rhinoceros_H__



#include "Animaux.h"


class Rhinoceros : public Animaux
{
protected:
	int espace;
public:
	
	Rhinoceros(std::string nom, float poids, int espace);
	void affiche();
	Diete diete();
	~Rhinoceros();
	std::string getnom();
};

#endif