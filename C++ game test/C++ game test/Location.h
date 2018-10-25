#pragma once
#include "stdafx.h"
#include "Event.h"
#include "Character.h"
class Location
{
private:
	bool SouthExit;
	bool NorthExit;
	bool WestExit;
	bool EastExit;
	Event ResidentEvent;
public:
	bool Old = false;
	Location()
	{
		SouthExit = ((rand() % 2 == 0) ? true : false);
		NorthExit = ((rand() % 2 == 0) ? true : false);
		WestExit = ((rand() % 2 == 0) ? true : false);
		EastExit = ((rand() % 2 == 0) ? true : false);
	};
	void NewRoom()
	{
		SouthExit = ((rand() % 2 == 0) ? true : false);
		NorthExit = ((rand() % 2 == 0) ? true : false);
		WestExit = ((rand() % 2 == 0) ? true : false);
		EastExit = ((rand() % 2 == 0) ? true : false);
		Old = true;
	}
	void NewRoom(Direction From)
	{
		switch (From)
		{
		case North:
		{
			SouthExit = true;
			NorthExit = ((rand() % 2 == 0) ? true : false);
			WestExit = ((rand() % 2 == 0) ? true : false);
			EastExit = ((rand() % 2 == 0) ? true : false);
			break;
		}
		case East:
		{
			SouthExit = ((rand() % 2 == 0) ? true : false);
			NorthExit = ((rand() % 2 == 0) ? true : false);
			WestExit = true;
			EastExit = ((rand() % 2 == 0) ? true : false);
			break;
		}
		case South:
		{
			SouthExit = ((rand() % 2 == 0) ? true : false);
			NorthExit = true;
			WestExit = ((rand() % 2 == 0) ? true : false);
			EastExit = ((rand() % 2 == 0) ? true : false);
			break;
		}
		case West:
		{
			SouthExit = ((rand() % 2 == 0) ? true : false);
			NorthExit = ((rand() % 2 == 0) ? true : false);
			WestExit = ((rand() % 2 == 0) ? true : false);
			EastExit = true;
			break;
		}
		}
		Old = true;
		ResidentEvent.GenerateRandomEvent();
	}
	int LeaveRoom(Direction ChosenDirection, Character &Tim)
	{
		switch (ChosenDirection)
		{
		case North:
		{
			if (NorthExit)
			{
				return 0;
			}
			else
			{
				cout << "You walk head first into a wall.\r\n -1hp\r\n";
				Tim.HealthModifier(-1);
				return 1;
			}
			break;
		}
		case East:
		{
			if (EastExit)
			{
				return 0;
			}
			else
			{
				cout << "You walk head first into a wall.\r\n -1hp\r\n";
				Tim.HealthModifier(-1);
				return 1;
			}
			break;
		}
		case South:
		{
			if (SouthExit)
			{
				return 0;
			}
			else
			{
				cout << "You walk head first into a wall.\r\n -1hp\r\n";
				Tim.HealthModifier(-1);
				return 1;
			}
			break;
		}
		case West:
		{
			if (WestExit)
			{
				return 0;
			}
			else
			{
				cout << "You walk head first into a wall.\r\n -1hp\r\n";
				Tim.HealthModifier(-1);
				return 1;
			}
			break;
		}
		default:
		{
			return 1;
		}
		}
	}
	void EnterRoom()
	{
		cout << ToString();
		ResidentEvent.ToString();
	}
	string ToString()
	{
		string ReturnString;
		ReturnString = "In this location there is: \r\n";
		if (SouthExit)
			ReturnString += "An exit to the South.\r\n";
		if (NorthExit)
			ReturnString += "An exit to the North.\r\n";
		if (WestExit)
			ReturnString += "An exit to the West.\r\n";
		if (EastExit)
			ReturnString += "An exit to the East.\r\n";
		return ReturnString;
	}
	~Location();
};

