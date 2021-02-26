#ifndef __Diete_H__
#define __Diete_H__

#include <iostream>
class Diete
{
protected:
	float totalviande = 0;
	float totalfruit = 0;
	float totalherbe = 0;
private:
	float viande;
	float fruit;
	float herbe;
	
public:
	float getViande();
	float getFruit();
	float getHerbe();
	Diete() = default;
	Diete(float viande, float fruit, float herbe);
	void afficherdiete();
	
};

#endif