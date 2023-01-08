#include "job.h"

Job::Job(string worker, string profesion){
    Worker = QString::fromStdString(worker);
    Profesion = QString::fromStdString(profesion);
}
