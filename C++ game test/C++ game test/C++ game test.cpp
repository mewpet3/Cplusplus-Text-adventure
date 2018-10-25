#include "stdafx.h"
#include "Character.h"
#include "Item.h"
#include "DefaultéSword.h"
#include "Event.h"
#include "Potion.h"
#include "Location.h"
#include "Map.h"

Character Tim = Character(20, 20);

int Time = 0;
Map GameMap;
int CurLocationX = GameMap.SizeX/2;
int CurLocationY = GameMap.SizeY/2;
int GameTime()
{
	Time++;
	return Time;
}

int main( )
{
	bool GameInProgress = true;
	do
	{
		cout << GameMap.Locations[CurLocationX][CurLocationY].ToString() + "\r\nWhat are ya gonna do?\r\n";
		string Doodle;
		cin >> Doodle;
		if (Doodle == "n")
		{
			if (GameMap.Locations[CurLocationX][CurLocationY].LeaveRoom(North, Tim) == 0)
			{
				cout << "You leave the room to the north.\r\n";
				CurLocationY++;
				if (!GameMap.Locations[CurLocationX][CurLocationY].Old)
					GameMap.Locations[CurLocationX][CurLocationY].NewRoom(North);
				else
					GameMap.Locations[CurLocationX][CurLocationY].EnterRoom();
			}
			else
			{
				cout << "You walked into a wall ya numpty.\r\n";
			}
		}
		else if (Doodle == "e")
		{
			if (GameMap.Locations[CurLocationX][CurLocationY].LeaveRoom(East, Tim) == 0)
			{
				cout << "You leave the room to the east.\r\n";
				CurLocationX++;
				if (!GameMap.Locations[CurLocationX][CurLocationY].Old)
					GameMap.Locations[CurLocationX][CurLocationY].NewRoom(East);
				else
					GameMap.Locations[CurLocationX][CurLocationY].EnterRoom();
			}
			else
			{
				cout << "You walked into a wall ya numpty.\r\n";
			}
		}
		else if (Doodle == "s")
		{
			if (GameMap.Locations[CurLocationX][CurLocationY].LeaveRoom(South, Tim) == 0)
			{
				cout << "You leave the room to the south.\r\n";
				CurLocationY--;
				if (!GameMap.Locations[CurLocationX][CurLocationY].Old)
					GameMap.Locations[CurLocationX][CurLocationY].NewRoom(South);
				else
					GameMap.Locations[CurLocationX][CurLocationY].EnterRoom();
			}
			else
			{
				cout << "You walked into a wall ya numpty.\r\n";
			}
		}
		else if (Doodle == "w")
		{
			if (GameMap.Locations[CurLocationX][CurLocationY].LeaveRoom(West, Tim) == 0)
			{
				cout << "You leave the room to the west.\r\n";
				CurLocationX--;
				if (!GameMap.Locations[CurLocationX][CurLocationY].Old)
					GameMap.Locations[CurLocationX][CurLocationY].NewRoom(West);
				else
					GameMap.Locations[CurLocationX][CurLocationY].EnterRoom();
			}
			else
			{
				cout << "You walked into a wall ya numpty.\r\n";
			}
		}
		else if (Doodle == "m")
			cout << GameMap.DisplayMap();
		if (Tim.IsDead())
			GameInProgress = false;
	} while (GameInProgress);
	cout << GameMap.DisplayMap();
	system("pause");

	return 0;
}