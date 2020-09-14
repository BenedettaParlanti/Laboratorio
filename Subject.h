//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_SUBJECT_H
#define ESAMELAB2020_SUBJECT_H

#include <memory>
#include "Observer.h"

class Subject{
public:
    virtual ~Subject(){}
    virtual void subscribe(Observer* o) = 0;
    virtual void unsubscribe(Observer* o) = 0;
    virtual void notify() = 0;

};

#endif //ESAMELAB2020_SUBJECT_H
