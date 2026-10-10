#include<iostream>
using namespace std;
#include"Fighter.h"


Fighter::Fighter(string missile_type, string nationality, int speed, string model): Aircraft(nationality, speed, model){
missile_typ = missile_type;
}

void Fighter::display(){

    Aircraft::display();
    cout<<"Missile Type is:"<<missile_typ<<"\n";
}