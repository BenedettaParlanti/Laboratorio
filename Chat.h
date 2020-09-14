//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_CHAT_H
#define ESAMELAB2020_CHAT_H

#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include "Utente.h"
#include "Messaggio.h"
#include "Subject.h"


class Chat : public Subject {
public:
    virtual ~Chat();
    void aggiungiMessaggio(const Messaggio& nuovoMessaggio);
    const Messaggio& ultimoMessaggio() const;
    void leggiMessaggio(int i);
    int getMessaggioNonLetto() const;
    std::string MessageToString(int i);
    bool check(std::string s);
    virtual void subscribe(Observer* o) override;
    virtual void unsubscribe(Observer* o) override;
    virtual void notify() override;


private:
    std::list<Observer*> observers;
    std::vector<Messaggio> messages;
};


#endif //ESAMELAB2020_CHAT_H
