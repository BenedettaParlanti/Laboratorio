//
// Created by Benedetta on 02/09/2020.
//

#include "NotificaMessaggio.h"

void NotificaMessaggio::attach() {
    oggetto->subscribe(this);
}
void NotificaMessaggio::detach(){
    oggetto->unsubscribe(this);
}

void NotificaMessaggio::update()  {
    if (attivo)
        this->draw(oggetto->ultimoMessaggio());
}

void NotificaMessaggio::draw (const Messaggio &ms){
    char buffer [80];
    time_t time =ms.getCurrentTime();
    struct tm *localTime = localtime (& time);
    strftime(buffer, 200, "%I:%M%p" , localTime);
    if((Messaggio)ms!=msLocal){
        std::cout << " ***Messaggio di notifica*** : "<< std::endl;
        std::cout << "Ultimo messaggio inviato alle ore : "<< buffer << "  da parte di " << ms.getMittente() << " a " << ms.getDestinatario() << std::endl;
        std::cout << "Testo: " << ms.getTesto() << std::endl;
    msLocal=(Messaggio)ms;
    }
}
