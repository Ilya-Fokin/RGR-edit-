#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

struct Event_name
{
	string name;
};

struct Date {
	int day, month, year, hour, min;
};

class Event
{
private:
	Event_name Name;
	Date date;

public:
	Event();
	Event(Event_name Name_, Date date_);
	~Event();

	void Print();
	void EventEntry(Event_name Name_, Date date_);
	
	//����� ������ ������
	Event_name GetName()
	{
		return Name;
	};
	Date GetDate()
	{
		return date;
	};

	Event& operator = (Event d_o);
};