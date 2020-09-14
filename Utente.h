//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_UTENTE_H
#define ESAMELAB2020_UTENTE_H


#include <iostream>
#include <memory>
#include <map>
#include "Chat.h"

class Chat;
class Utente {
public:

    explicit Utente(std::string nome) : nome (nome) {}
    ~Utente();

    const std::string &getNome() const {
        return nome;
    }

    void setNome(const std::string &nome) {
        Utente::nome = nome;
    }

    Chat* creaChat(Utente& u);

    Chat* trovaChat(const Utente& u);

    void eliminaChat(const Utente& u);


private:
    std::string nome;
    std::map <std::string,Chat*> chats;
};

#endif //ESAMELAB2020_UTENTE_H
