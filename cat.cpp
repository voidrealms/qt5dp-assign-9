#include "cat.h"

Cat::Cat(QObject *parent) : QObject(parent)
{

}


void Cat::eat()
{
    qInfo() << this << "eating";
}

void Cat::sleep()
{
    qInfo() << this << "sleeping";
}
