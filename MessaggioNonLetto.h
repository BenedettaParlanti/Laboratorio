//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_MESSAGGIONONLETTO_H
#define ESAMELAB2020_MESSAGGIONONLETTO_H


#include <vector>
#include <list>
#include <memory>
#include "Observer.h"
#include "Chat.h"
#include "Subject.h"


class MessaggioNonLetto: public Observer {

public:
    explicit MessaggioNonLetto(Chat* subj):subject(subj){
        umLocal=-1;
    }

    ~MessaggioNonLetto(){}

    virtual void attach() override;

    virtual void detach() override;

    virtual void update() override;

    void draw(int um);

private:
    Chat* subject;
    int umLocal;
};



#endif //ESAMELAB2020_MESSAGGIONONLETTO_H
