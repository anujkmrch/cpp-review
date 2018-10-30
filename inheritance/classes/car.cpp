#include "car.h"

Car::Car()
{
    name = "";
    nr = 0;
    state = 0.0;
}

Car::Car(const string &i_name, unsigned long i_nr, double i_state)
{
    name = i_name;
    nr = i_nr;
    state = i_state;
}

Car::Car(const string &i_name)
{
    name = i_name;
    nr = 0;
    state =0.0;
}

bool Car::init(const string &i_name, unsigned long i_nr, double i_state)
{
    if(name.size() < 1)
        return false;

    name = i_name;
    nr = i_nr;
    state = i_state;

    return true;
}

void Car::display()
{
    cout << "Name: " <<name << endl << "Nr: " << nr << endl << "State: " << state << endl;
}
