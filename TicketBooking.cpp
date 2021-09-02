#include<cstring>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class TicketBooking
{
     private:
         string seatType;
         int noOfSeats;
         string show;
     public:
     void setSeatType(string st)
     {
         seatType = st;
     }
     void setNoOfSeats(int nos)
     {
         noOfSeats = nos;
     }
     void setShow(string s)
     {
         show = s;
     }
     string getSeatType()
     {
         return seatType;
     }
     int getNoOfSeats()
     {
         return noOfSeats;
     }
     string getShow()
     {
         return show;
     }
     TicketBooking()
     {
         cout << "Welcome to the TicketBooking" << endl;
     }
     TicketBooking(string seatType, int noOfSeats, string show)
     {
         this->setSeatType(seatType);
         this->setNoOfSeats(noOfSeats);
         this->setShow(show);
     }
     ~TicketBooking()
     {
         cout << "Your tickets booked successfully";
     }
     double calculatePrice()
     {
         double total;
         if (this->getSeatType() == "Platinum") {
             total = this->getNoOfSeats() * 200;
		}
		else if (this->getSeatType() == "Gold") {
             total = this->getNoOfSeats() * 150;
		}
		else {
           total = this->getNoOfSeats() * 100;
		}
         return total;
     }
     void display()
     {
         cout << "Booking details:" << endl;
         cout << this->getSeatType() << endl << this->getNoOfSeats() << endl << this->getShow() << endl << "Total Cost: " << this->calculatePrice() << endl;
     }
 };
