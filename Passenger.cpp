#include "Passenger.h"
#include<iostream>
using namespace std;

  Passenger:: Passenger(string n , string na, string d , 
    int t, string aircraft_nationality , int aircraft_speed , 
    string aircraft_model):
    Aircraft(aircraft_nationality, aircraft_speed, aircraft_model){
      
        name = n;
        nationality = na;
        destination = d;
        time = t;
        passenger_count++;

        
    }
void Passenger::display()
{
    Aircraft::display();
    cout<<"Passenger Name is:"<<name<<"\n";
    cout<<"Passenger Nationality is:"<<nationality<<"\n";
    cout<<"Passenger Destination is:"<<destination<<"\n";
    cout<<"Flight Time is:"<<time<<"\n";
}
int Passenger::passenger_count = 0;
int Passenger::get_passenger_count(){

    return passenger_count;
}