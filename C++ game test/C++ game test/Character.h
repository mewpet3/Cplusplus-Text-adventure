#pragma once
#include "stdafx.h"
static class Character
{
private:
	int Health;
	int Mana;
	bool Dead;
public:
	Character(int health, int mana)
	{
		Health = health;
		Mana = mana;
		Dead = false;
	}
	bool IsDead()
	{
		return Dead;
	}
	bool HealthModifier(int health)
	{
		Health += health;
		cout << "You now have: " << Health << " Health.\r\n";
		if (Health < 1)
		{
			DeadCharacter();
			return 0;
		}
		else
			return 1;
	}
	void DeadCharacter()
	{
		Dead = true;
		cout << "\r\nYou have died.\r\nGame Over!.\r\n";
	}
};
