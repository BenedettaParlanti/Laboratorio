//
// Created by Benedetta on 02/09/2020.
//

#include "Chat.h"

Chat::~Chat() {
    for(auto it: observers)
        unsubscribe(it);
}

void Chat::aggiungiMessaggio(const Messaggio& nuovoMessaggio){ //TODO
        messages.push_back(nuovoMessaggio);
        notify();
}

const Messaggio& Chat::ultimoMessaggio() const{
    return messages.back();
}

void Chat::leggiMessaggio(int i){
    if(i>=0 && i<messages.size()) {
            messages[i].setRead(true);
            notify();
        }
    else
        throw std::out_of_range(" Messaggio non presente nella chat. ");
}


int Chat::getMessaggioNonLetto() const {
    int i=0;
    for(auto message : messages)
            if (!(message.isRead()))
                i++;
    return i;
}


void Chat::subscribe(Observer* o) {
    observers.push_back(o);
}


void Chat::unsubscribe(Observer* o) {
    observers.remove(o);

}

void Chat::notify() {
    for (auto it: observers)
        it->update();
}

std::string Chat::MessageToString(int i) {
    std::string s= "Mittente: "+ messages[i].getMittente() + ", " + "Destinatario: " + messages[i].getDestinatario() + "\n" +
             "Testo: " + messages[i].getTesto();
    return s;

}

bool Chat::check(std::string s) {
    return s==ultimoMessaggio().getTesto();
}




