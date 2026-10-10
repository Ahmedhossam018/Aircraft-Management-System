#include<iostream>
using namespace std;
#include"Aircraft.h"

class Passenger :public Aircraft{


    private:
    
    static int passenger_count;

    string name;

    string nationality;

    string destination;

    int time;

    public:

    Passenger(string n , string na, string d , int t, string aircraft_nationality , int aircraft_speed , string aircraft_model);

    void display();

   static int get_passenger_count();

};