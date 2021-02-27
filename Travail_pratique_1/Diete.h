#ifndef __Diete_H__
#define __Diete_H__

class Diete
{
protected:
	float viande;
	float fruit;
	float herbe;
	
public:
	float getViande();
	float getFruit();
	float getHerbe();
	
	void afficherdiete();
	Diete(float viande, float fruit, float herbe);
	};

#endif