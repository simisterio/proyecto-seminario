#ifndef PROYECTOSEMINARIO_SCHEDULER_H
#define PROYECTOSEMINARIO_SCHEDULER_H

#include "Event.h"
#include <list>
#include <vector>

class Scheduler {
private:
    std::vector<Event> scheduler;
public:
    void pushEvento(Event newEvent);
    Event popEvent();
    void freeScheduler();
    void print();
};


#endif //PROYECTOSEMINARIO_SCHEDULER_H
