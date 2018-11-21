#include <iostream>
#include "Scheduler.h"


void Scheduler::pushEvento(Event newEvent) {
    if (scheduler.empty()) {
        scheduler.insert(scheduler.begin(), newEvent);
        return;
    }

    std::vector<Event>::iterator it = scheduler.begin();

    while (newEvent.getTiempo() > it->getTiempo() && it != scheduler.end())
        it++;

    scheduler.insert(it, newEvent);

}

void Scheduler::print() {
    std::cout << "--- Routes ---" << std::endl;
    for (int i = 0; i < scheduler.size(); i++) {

        std::cout << std::to_string(scheduler[i].getTiempo()) << ' ';
    }
    std::cout << std::endl;
}

Event Scheduler::popEvent() {
    Event popEvent = scheduler[0];
    scheduler.erase(scheduler.begin());
    std::cout << popEvent.getTiempo() << std::endl;
    return popEvent;
}

void Scheduler::freeScheduler() {
    scheduler.clear();
}
