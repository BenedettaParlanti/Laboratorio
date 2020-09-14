//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_OBSERVER_H
#define ESAMELAB2020_OBSERVER_H

class Observer {
public:
    virtual ~Observer(){}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
};

#endif //ESAMELAB2020_OBSERVER_H
