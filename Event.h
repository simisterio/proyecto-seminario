#ifndef PROYECTOSEMINARIO_EVENT_H
#define PROYECTOSEMINARIO_EVENT_H


class Event {
private:
    int type;
    float time;
    int source;
    int dest;
    int hops;
    int *path;
public:
    Event();
    Event(int type, float time, int source, int dest, int hops);
    float getTiempo();
};


#endif //PROYECTOSEMINARIO_EVENT_H
