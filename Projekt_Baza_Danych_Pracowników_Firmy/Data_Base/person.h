#ifndef PERSON_H
#define PERSON_H
#include <string.h>
#include <QString>
#include "job.h"
#include "address.h"

using std::string;

class Person
{
public:
    int ID {};
    QString Name {};
    QString Surname {};
    int Age {};
    QString Date_Of_Birth {};
    Address Add {};
    Job job {};
    Person(int id = 0, string name = "None", string surname = "None", int age = 0, string DateOfBirth="Unknown", Address add = Address(), Job _job = Job());
};

#endif // PERSON_H
