#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
class DateTime
{
private:
    struct tm *datetime;
public:
    DateTime();
    tm *getDatetime() const;
};

#endif // DATETIME_H
