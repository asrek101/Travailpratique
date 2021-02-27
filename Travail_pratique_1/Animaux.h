#ifndef __ANIMAUX_H__
#define __ANIMAUX_H__

#include <string>
#include <iostream>
#include "Diete.h"
class Animaux
	{
	
	protected:
		std::string nom;
		float poids;
	
	public:
		
		Animaux(std::string nom, float poids);
		virtual void affiche();
		virtual Diete diete() = 0;
		virtual ~Animaux();
		virtual std::string getnom()= 0;
};


#endif