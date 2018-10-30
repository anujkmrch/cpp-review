#include "datetime.h"
tm *DateTime::getDatetime() const
{
    return datetime;
}

DateTime::DateTime()
{
    time_t sec;
    time (&sec);
    datetime = localtime(&sec);
}
