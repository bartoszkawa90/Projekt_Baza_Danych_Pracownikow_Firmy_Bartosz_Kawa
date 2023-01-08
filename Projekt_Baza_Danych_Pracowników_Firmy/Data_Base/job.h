#ifndef JOB_H
#define JOB_H
#include <string.h>
#include <QString>

using std::string;

class Job{
public:
    QString Worker = "No";
    QString Profesion {};
    Job(string worker="No", string profesion="None");
};

#endif // JOB_H
