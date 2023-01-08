#include "address.h"

Address::Address(string street, int num, string city) {
    Street = QString::fromStdString(street);
    Num = num;
    City = QString::fromStdString(city);
}
