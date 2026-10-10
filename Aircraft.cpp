   using namespace std;
   #include<iostream>
   #include"Aircraft.h"
   
   string Aircraft:: get_nationality(){

        return nationality;
    }

    string Aircraft:: get_model(){

        return model;

    }

   int Aircraft:: get_speed(){

    return speed;
   }

    Aircraft :: Aircraft(string nationality, int speed, string model): 
    nationality(nationality),
     speed(speed), 
     model(model){

     }
    
    void Aircraft::display(){
       
        cout<<"Aircraft Nationality is:"<<nationality<<"\n";
        cout<<"Aircraft Model is:"<<model<<"\n";
        cout<<"Aircraft Speed is:"<<speed<<"\n";


    }
       
   