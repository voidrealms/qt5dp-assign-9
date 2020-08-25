#include <QCoreApplication>

/*

  What
  Bridge Design Pattern

  Description
  Decouple an abstraction from its implementation so that the two can vary independently.
  Note interfaces make this simple

  Why
  We want code reuse
  This is a design choice!
  Done BEFORE the original classes are created

  Example
  Cat and Dog - both animals


 */

#include "ianimal.h"
#include "cat.h"
#include "dog.h"

void testBridge(iAnimal *animal)
{
    animal->eat();
    animal->sleep();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    Cat cat;

    testBridge(&dog);
    testBridge(&cat);

    return a.exec();
}
