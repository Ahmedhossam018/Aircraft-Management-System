#include<iostream>
using namespace std;
#include"Aircraft.h"
#include"Passenger.h"
#include"Fighter.h"

int main(){

Passenger p1("John Doe", "American", "New York", 5, "SU", 600, "Boeing 747");
Passenger p2("Jane Smith", "British", "London", 3, "UK", 550, "Airbus A320");
Passenger p3("Ali Khan", "Pakistani", "Karachi", 4, "PAK", 500, "Airbus A320");
Passenger p4("Maria Garcia", "Spanish", "Madrid", 2, "SP", 650, "Boeing 737");
Fighter f1("AIM-120 AMRAAM", "US", 1500, "F-22 Raptor");
p1.display();
cout<<"########################\n"<<"########################\n";
p2.display();
cout<<"########################\n"<<"########################\n";
p3.display();
cout<<"########################\n"<<"########################\n";
p4.display();
cout<<"########################\n"<<"########################\n";
f1.display();
cout<<"Total Passengers: "<<Passenger::get_passenger_count()<<"\n";
    return 0;
}