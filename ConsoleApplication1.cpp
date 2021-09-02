#include<cstring>  
#include<iostream>
#include<string>
#include "Event.cpp"
using namespace std;
int main()
{
	string eventName, eventDetail, eventType, eventOrganizerName;
	cout << "Enter details of the event" << endl;
	cout << "Enter event name:" << endl;
	getline(cin, eventName);
	cout << "Enter the event detail:" << endl;
	getline(cin, eventDetail);
	cout << "Enter the event type:" << endl;
	getline(cin, eventType);
	cout << "Enter the event organizer name:" << endl;
	getline(cin, eventOrganizerName);
	Event event(eventName, eventDetail, eventType, eventOrganizerName);
	event.display();
	return 0;
}


//#include<cstring>  
//#include<iostream>
//#include<string>
//#include "TicketBooking.cpp"
//using namespace std;
//int main()
//{
//	TicketBooking tb;
//	int noOfSeats;
//	string seatType, show;
//	cout << "Enter the booking details" << endl;
//	cout << "Enter the Seat Type from Platinum, Gold or Silver:" << endl;
//	cin >> seatType;
//	cout << "Enter the number of seats :" << endl;
//	cin >> noOfSeats;
//	cout << "Enter the show :" << endl;
//	getline(cin, show);
//	getline(cin, show);
//	tb.setSeatType(seatType);
//	tb.setNoOfSeats(noOfSeats);
//	tb.setShow(show);
//	tb.display();
//}