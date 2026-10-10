#pragma once
#include<iostream>
using namespace std;

class Aircraft{


    private:
    string nationality;
    int speed;
    string  model;
    
    public:

    Aircraft(string nationality, int speed, string model);
      

    string get_nationality();

    string get_model();

    int get_speed();
    
  

    virtual void display() = 0;

};
