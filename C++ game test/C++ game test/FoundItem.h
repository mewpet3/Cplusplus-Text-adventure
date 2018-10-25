#pragma once
#include "Event.h"
class FoundItem : public Event
{
private:

public:
	FoundItem() : Event()
	{
		STitle("There is an Item here.");

	}
	~FoundItem();
};

