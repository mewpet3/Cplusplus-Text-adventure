#pragma once
#include "Item.h"
class DefaultéSword : public Item
{
private:

public:
	DefaultéSword() : Item(true, true, true, false, 50, "A sword from the land of Defaulté, an exotic weapon in the sense that it is the most basic looking sword that could possibly be imagined.\r\nA feat that is a marvel of completely average engineering.")
	{

	}
	~DefaultéSword();
};

