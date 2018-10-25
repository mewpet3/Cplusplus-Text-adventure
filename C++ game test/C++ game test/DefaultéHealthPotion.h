#pragma once
#include "Potion.h"

class DefaultéHealthPotion : public Potion
{
private:
	int Amount = 5;
	Effect PotEffect = Heal;
public:
	DefaultéHealthPotion() : Potion()
	{
	}
	~DefaultéHealthPotion();
};

