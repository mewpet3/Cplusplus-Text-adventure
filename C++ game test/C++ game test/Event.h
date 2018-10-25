#pragma once
class Event
{
private:
	string title;
	string description;
public:
	enum Events
	{
		FoundItem,
		Enemy,
		Trap,
		Stranger
	};
	Event()
	{

	}
	Event(int EventNo)
	{

	}
	Event(string Title, string Description)
	{
		title = Title;
		description = Description;
	}

	void STitle(string value)
	{
		title = value;
	}
	string GTitle(void)
	{
		return title;
	};

	void SDescription(string value)
	{
		description = value;
	}
	string GDescription(void)
	{
		return description;
	};
	void GenerateRandomEvent()
	{
		switch (rand() % 5)
		{
			case 0:
			{

				break;
			}
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				cout << "The room is empty, you may continue upon your quest.\r\n\r\n";
				break;
			}
		}
	}

	string ToString()
	{
		return "/////" + GTitle() + "\\\\\\\\\\\r\n" + GDescription();
	};
	~Event();
};

