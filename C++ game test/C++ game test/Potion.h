#pragma once
#include "stdafx.h"
#include "Item.h"
#include "Character.h"
class Potion : public Item
{
private:

public:
	Potion() : Item(false, true, true, false, 1)
	{

	}
	bool Drink(Character Tim, Effect StatEffect, int Amount)
	{
		switch (StatEffect)
		{
		case Damage:
		{
			Tim.HealthModifier(-Amount);
			break;
		}
		case Heal:
		{
			Tim.HealthModifier(Amount);
			break;
		}
		case Attack:
		{
			break;
		}
		case Def:
		{
			break;
		}
		case DOT:
		{
			break;
		}
		case Agility:
		{
			break;
		}
		case STR:
		{
			break;
		}
		}
	}
	~Potion();
};

