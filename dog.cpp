#include "dog.h"

Dog::Dog(QObject *parent) : QObject(parent)
{

}


void Dog::eat()
{
    qInfo() << this << "eating";
}

void Dog::sleep()
{
    qInfo() << this << "sleeping";
}
