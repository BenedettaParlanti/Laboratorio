//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_NOTIFICAMESSAGGIO_H
#define ESAMELAB2020_NOTIFICAMESSAGGIO_H


#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <ctime>
#include "Messaggio.h"
#include "Observer.h"
#include "Chat.h"


class NotificaMessaggio: public Observer{
public:
    NotificaMessaggio(bool att, Chat* subj){
        attivo=att;
        oggetto=subj;
        msLocal= Messaggio("","","");
    }

    virtual ~NotificaMessaggio(){}

    virtual void attach() override;
    virtual void detach() override;
    virtual void update() override ;

    void draw(const Messaggio & ms);

    bool isAttivo() const {
        return attivo;
    }

    void setAttivo(bool attivo) {
        NotificaMessaggio::attivo = attivo;
    }

private:
    bool attivo;
    Chat* oggetto;
    Messaggio msLocal;
};


#endif //ESAMELAB2020_NOTIFICAMESSAGGIO_H
