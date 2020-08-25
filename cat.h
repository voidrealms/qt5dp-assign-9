#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>
#include "ianimal.h"

class Cat : public QObject, public iAnimal
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

signals:


    // iAnimal interface
public:
    void eat() override;
    void sleep() override;
};

#endif // CAT_H
