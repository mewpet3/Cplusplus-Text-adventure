#pragma once
#include "stdafx.h"
class Item
{
protected:
	bool IsWeapon;
	bool IsConsumable;
	bool IsThrowable;
	bool IsBroken;
	int Uses;
	string Description;
public:
	Item(bool isWeapon, bool isConsumable, bool isThrowable, bool isBroken, int uses)
	{
		IsWeapon = isWeapon;
		IsConsumable = isConsumable;
		IsThrowable = isThrowable;
		IsBroken = isBroken;
		Uses = uses;
	}
	Item(bool isWeapon, bool isConsumable, bool isThrowable, bool isBroken, int uses, string description)
	{
		IsWeapon = isWeapon;
		IsConsumable = isConsumable;
		IsThrowable = isThrowable;
		IsBroken = isBroken;
		Uses = uses;
		Description = description;
	}
	~Item();
};

