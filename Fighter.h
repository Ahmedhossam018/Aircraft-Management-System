#include<iostream>
using namespace std;
#include"Aircraft.h"
class Fighter: public Aircraft{

    private:
    string missile_typ;

    public:

    Fighter(string missile_type, string nationality, int speed, string model);

    void display();


};