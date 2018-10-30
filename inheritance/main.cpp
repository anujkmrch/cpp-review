#include <iostream>
#include <classes/car.h>
#include <classes/datetime.h>
int main()
{
    DateTime dt;
    cout << dt.getDatetime()->tm_hour << " : " << dt.getDatetime()->tm_min << " : " << dt.getDatetime()->tm_sec << endl;
    return 0;
}
