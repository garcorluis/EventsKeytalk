#include <iostream>

#include "FirstClass.h"
#include "SecondClass.h"
#include "SecondClassArgs.h"
#include "EventHandler.h"

FirstClass::FirstClass(const std::shared_ptr<SecondClass>& secondClass)
    : _secondClass(secondClass)
{
    // Subscribe to events
    _secondClass->myEvent += EventHandler<SecondClass, SecondClassArgs>(
        secondClass,
        [this](const SecondClassArgs& args) { OnMyEvent(args); }
    );
}

void FirstClass::OnMyEvent(const SecondClassArgs& args) const {
    std::cout << "Event received with value: " << args.Args() << std::endl;
}

