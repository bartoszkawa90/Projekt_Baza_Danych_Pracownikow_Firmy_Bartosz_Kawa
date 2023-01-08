#ifndef ADDRESS_H
#define ADDRESS_H
#include <string.h>
#include <QString>

using std::string;

class Address
{
public:
    QString City {};
    QString Street {};
    int Num{};
    Address(string street="None", int num=0, string city="None");
};
#endif // ADDRESS_H
