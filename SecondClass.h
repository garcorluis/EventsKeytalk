#ifndef SECOND_CLASS_H
#define SECOND_CLASS_H

#include "Event.h"
#include "SecondClassArgs.h"

class SecondClass
{
public:
    Event<SecondClass, SecondClassArgs> myEvent;

    void TriggerEvent(double value) const {
        SecondClassArgs args(value);
        myEvent(args);
    }
};
#endif // SECOND_CLASS_H

