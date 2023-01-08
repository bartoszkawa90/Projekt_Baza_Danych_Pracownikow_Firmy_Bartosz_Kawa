#include "person.h"
#include <string.h>
#include <QString>

using std::string;

Person::Person(int id, string name, string surname, int age, string DateOfBirth, Address add, Job _job){
    ID = id;
    Name = QString::fromStdString(name);
    Surname = QString::fromStdString(surname);
    Age = age;
    Date_Of_Birth = QString::fromStdString(DateOfBirth);
    Add = add;
    job = _job;

}
