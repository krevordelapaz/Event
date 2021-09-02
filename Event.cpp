#include<cstring>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Event
{
private:
	string eventName;
	string eventDetail;
	string eventType;
	string eventOrganizerName;
public:
	void seteventName(string en)
	{
		eventName = en;
	}
	void seteventDetail(string ed)
	{
		eventDetail = ed;
	}
	void seteventType(string et)
	{
		eventType = et;
	}
	void seteventOrganizerName(string eon)
	{
		eventOrganizerName = eon;
	}
	string geteventName()
	{
		return eventName;
	}
	string geteventDetail()
	{
		return eventDetail;
	}
	string geteventType()
	{
		return eventType;
	}
	string geteventOrganizerName()
	{
		return eventOrganizerName;
	}
	Event(string eventName, string eventDetail, string eventType, string eventOrganizerName)
	{
		this->seteventName(eventName);
		this->seteventDetail(eventDetail);
		this->seteventType(eventType);
		this->seteventOrganizerName(eventOrganizerName);
	}

	void display()
	{
		cout << "Event details" << endl;
		cout << "Event name: " << this->geteventName() << endl << "Event detail: " << this->geteventDetail() << endl << "Event type: " << this->geteventType() << endl << "Event organizer: " << this->geteventOrganizerName() << endl;
	}
};