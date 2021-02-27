#ifndef __TIGRE_H__
#define __TIGRE_H__

#include <iostream>

#include "Animaux.h"


class Tigre : public Animaux
{
	public:
	Tigre(std::string nom, float poids);
	void affiche();
	Diete diete();
	~Tigre();
	std::string getnom();
};

#endif
