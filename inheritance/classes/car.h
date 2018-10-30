#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;
class Car
{
private:
    string name;
    unsigned long nr;
    double state;
public:
    Car();
    Car(const string &i_name, unsigned long i_nr, double i_state);
    Car(const string &i_name);
    bool init(const string &i_name, unsigned long i_nr, double i_state);
    void display();
};

#endif // CAR_H
