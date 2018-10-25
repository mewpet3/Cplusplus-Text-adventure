#pragma once
#include "stdafx.h"
#include "Location.h"
class Map
{
private:
	
public:
	int SizeX = 10;
	int SizeY = 10;
	Location Locations[10][10];

	string DisplayMap()
	{
		string ReturnString;
		for (int i = 0; i < 10; i++)
		{
			for (int ii = 0; ii < 10; ii++)
			{
				if (Locations[i, ii]->Old)
					ReturnString += "O";
				else
					ReturnString += "X";
			}
			ReturnString += "\n";
		}
		return ReturnString;
	}
	~Map();

};