#include "Event.h"

Event::Event()
{

	Name.name = "none";
	
	date.day = 0;
	date.month = 0;
	date.year = 0;
	date.hour = 0;
	date.min = 0;
}

Event::Event(Event_name Name_, Date date_)
{

	Name.name = Name_.name;

	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;
	date.hour = date_.hour;
	date.min = date_.min;
}

Event::~Event()
{

}

void Event::Print()
{
	cout << Name.name<<" ";
	cout << date.year << "/" << date.month << "/" << date.day <<" "<<date.hour <<":"<<date.min<<endl;
}

void Event::EventEntry(Event_name Name_, Date date_)
{

	Name.name = Name_.name;

	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;
	date.hour = date_.hour;
	date.min = date_.min;
}

Event& Event::operator=(Event d_o)
{

	this->Name.name = d_o.Name.name;

	this->date.day = d_o.date.day;
	this->date.month = d_o.date.month;
	this->date.year = d_o.date.year;
	this->date.hour = d_o.date.hour;
	this->date.min = d_o.date.min;

	return *this;
}