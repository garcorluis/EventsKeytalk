#ifndef SECOND_CLASS_ARGS_H
#define SECOND_CLASS_ARGS_H

#include "EventArgs.h"

class SecondClassArgs : public EventArgs<double> {
public:
    explicit SecondClassArgs(double value) : EventArgs<double>(value) {}
};

#endif // SECOND_CLASS_ARGS_H
