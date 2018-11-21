#include <iostream>
#include "Grafo.h"
#include "Simulador.h"
#include "Scheduler.h"


int main() {
    Grafo grafo;
    grafo.loadNetwork(0);
    grafo.printData();
    grafo.printRoute();
    grafo.printPath();


    /*
    Scheduler scheduler;

    scheduler.pushEvento(Event(1, 0.3, 0, 1, 2));
    scheduler.pushEvento(Event(1, 1.3, 0, 1, 2));
    scheduler.pushEvento(Event(1, 1.2, 0, 1, 2));
    scheduler.pushEvento(Event(1, 0.2, 0, 1, 2));
    scheduler.pushEvento(Event(1, 1.4, 0, 1, 2));
    scheduler.pushEvento(Event(1, 0.1, 0, 1, 2));
    //scheduler.popEvent();
    //scheduler.popEvent();


    scheduler.print();
    scheduler.freeScheduler();
     */


    /*
    Simulador sim;
    sim.setllegadasTot(1900);
    sim.setMU(21.2);
    sim.setLAMBDA(1.2);
    sim.setTON(0.2);
    sim.setTOFF(7.7);
    sim.setcargaTrafico(1);

    std::cout<< "Llegadas totales"<<": "<<sim.getllegadasTot()<<std::endl;
    std::cout<< "MU"<<": "<<sim.getMU()<<std::endl;
    std::cout<< "Lambda"<<": "<<sim.getLAMBDA()<<std::endl;
    std::cout<< "ton"<<": "<<sim.getton()<<std::endl;
    std::cout<< "toff"<<": "<<sim.gettoff()<<std::endl;
    std::cout<< "carga de trafico"<<": "<<sim.getcargaTrafico()<<std::endl;

     */

    return 0;
}