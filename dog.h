#ifndef DOG_H
#define DOG_H

#include <QObject>
#include <QDebug>
#include "ianimal.h"

class Dog : public QObject, public iAnimal
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);

signals:


    // iAnimal interface
public:
    void eat() override;
    void sleep() override;
};

#endif // DOG_H
