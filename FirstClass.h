#ifndef FIRST_CLASS_H
#define FIRST_CLASS_H

#include <memory>
 
class SecondClass;
class SecondClassArgs;

class FirstClass {
public:
    explicit FirstClass(const std::shared_ptr<SecondClass>& secondClass);

    void OnMyEvent(const SecondClassArgs& args) const;

private:
    std::shared_ptr<SecondClass> _secondClass;
};


#endif // FIRST_CLASS_H

