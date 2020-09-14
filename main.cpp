
#include <iostream>
#include <memory>
#include "Chat.h"
#include "Messaggio.h"
#include "MessaggioNonLetto.h"
#include "NotificaMessaggio.h"
#include "Utente.h"

int main() {

    Utente benedetta("Benedetta");
    Utente lisa("Lisa");
    Chat* chat=benedetta.creaChat(lisa);
    //std::shared_ptr<Chat> ptr2= benedetta.trovaChat(lisa);

    NotificaMessaggio notificaMessaggio(true, chat);

    //NotificaMessaggio nm(true,ptr2);
    MessaggioNonLetto um(chat);



    Messaggio ciao( "Benedetta" , "Ciccio", "Ciao ciccio!");
    Messaggio foo("Benedetta", "Lisa", "Ehi Lisa, stasera andiamo al cinema? ");
    Messaggio bar ("Lisa", "Benedetta", "Ok, passo io, verso le 21.30 va bene? ");
    Messaggio fooBar("Benedetta", "Lisa", "Si si, va bene.") ;
    notificaMessaggio.attach();
    um.attach();


    
    chat->aggiungiMessaggio(foo);
    if(!chat->check("Ehi Lisa, stasera andiamo al cine? "))
        std::cerr<<"Errore invio messaggio! " <<std::endl;

    chat->aggiungiMessaggio(bar);
    chat->aggiungiMessaggio(fooBar);
    std::cout<< std::endl;

    try {
        std::cout<< chat->MessageToString(0) <<std::endl;
        chat->leggiMessaggio(0);
        std::cout<< chat->MessageToString(1)<<std::endl;
        chat->leggiMessaggio(1);
        std::cout<< chat->MessageToString(2)<<std::endl;
        chat->leggiMessaggio(2);



    }
    catch (std::out_of_range &e) {
        std::cerr << "Out of range error:" << e.what() << std::endl;
    }


}