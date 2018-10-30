# cpp-review
This is the C++ review repository.
I will add the project and classes description on the fly in ordered list.

1. Currently I am Reviewing Constructors so I make a small Car Class and DateTime Class an initializing it's object in the main function and calling in there.
#### code for main file
```
  #include <iostream>
  #include <classes/car.h>
  #include <classes/datetime.h>
  int main()
  {
      //Creating DateTime object
      DateTime dt;
      string line(50,'-');
      cout << dt.getDatetime()->tm_hour << " : " << dt.getDatetime()->tm_min << " : " << dt.getDatetime()->tm_sec << endl;
      cout << line << endl;
      //Declaring Car object with differet type of constructors
      Car car1("Car one",40,2.1); // constructor with 3 arguments
      Car car2("Car 2"); //constructor with 1 argument
      Car car3; //default constructor
      Car car4(car2); // copy constructor
      car1.display();
      cout << line << endl;
      car2.display();
      cout << line << endl;
      car3.display();
      Car *ptrCar; //Declaring pointer object
      Car &refTwo = car2; //declaring and  initializing reference to an object car2
      ptrCar = &car1; //assigning car1 address to pointer
      cout << line << endl;
      ptrCar->display(); //displaying the car1 value with pointer variable
      cout << line << endl;
      refTwo.display(); //displaying value of car2 with it's alias or reference variable
      cout << line << endl;
      ptrCar = &car3; //assigning car3 object address to pointer variable
      ptrCar->display(); //displaying car3 values with pointer variable
      cout << line << endl;
      car4.display(); //displaying the values of car4 object which was actually a copy constructor
      return 0;
  }
```
