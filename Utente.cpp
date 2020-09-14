//
// Created by Benedetta on 02/09/2020.
//

#include "Utente.h"

Utente::~Utente() {}

Chat* Utente::creaChat (Utente& u){
    Chat *c = new Chat ();
    Chat* ptr = c;
    chats.insert(std::make_pair(u.getNome(),ptr));
    chats.insert(std::make_pair(nome,ptr));
    return ptr;
}

void Utente::eliminaChat(const Utente& u){
    auto it=chats.find(u.getNome());
    chats.erase(it);
}


Chat* Utente::trovaChat(const Utente& u){
    auto it=chats.find(u.getNome());
    return (it->second);
}