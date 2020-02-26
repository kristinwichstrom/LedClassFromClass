//LedPin = D5

#include <Arduino.h>


class Led {


    public:
    int pinNumber;
    bool state;

    Led (int pinNumber){   // Creates a constructor for the class. The constructor starts imidiately 
    this->pinNumber = pinNumber;  //this->class variable = variable; --- This keyword refers to the class you are inside
    pinMode (this->pinNumber,OUTPUT);
    }
    
    void on () { //Creates method
digitalWrite (this->pinNumber, HIGH);
this->state = true;
    }
    void off () {
digitalWrite(this->pinNumber, LOW);
this->state == false;
    }

    String status () {

String s;
s+= " The LED on pin: ";
s += this->pinNumber;
s += " is ";

if (this-> state) s+= "ON"; 
else 
{
    s+= "OFF";
}
        return s;
    }

int setBrightness () {

}
};
