#include <memory>

#include "FirstClass.h"
#include "SecondClass.h"

void main() 
{
	auto secondClass = std::make_shared<SecondClass>();

	FirstClass firstClass(secondClass);
	secondClass->TriggerEvent(42.2);
}