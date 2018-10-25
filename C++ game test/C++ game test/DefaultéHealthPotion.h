#pragma once
#include "Potion.h"

class Default�HealthPotion : public Potion
{
private:
	int Amount = 5;
	Effect PotEffect = Heal;
public:
	Default�HealthPotion() : Potion()
	{
	}
	~Default�HealthPotion();
};

