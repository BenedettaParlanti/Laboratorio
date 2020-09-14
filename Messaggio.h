//
// Created by Benedetta on 02/09/2020.
//

#ifndef ESAMELAB2020_MESSAGGIO_H
#define ESAMELAB2020_MESSAGGIO_H

#include <iostream>
#include <vector>
#include <list>
#include <ctime>

class Messaggio{
public:
    Messaggio(){}
    Messaggio(std::string mit, std::string dest, std::string te, bool r = false): mittente(mit), destinatario(dest), testo(te), read(r){
        time(&currentTime);
    }

    const std::string &getMittente() const {
        return mittente;
    }

    const std::string &getDestinatario() const {
        return destinatario;
    }

    const std::string &getTesto() const {
        return testo;
    }


    bool isRead() const {
        return read;
    }
    void setRead(bool read) {
        Messaggio::read = read;
    }

    time_t getCurrentTime() const {
        return currentTime;
    }

    bool operator ==(const Messaggio &rhs) const {
        return mittente == rhs.mittente &&
               destinatario == rhs.destinatario&&
               testo == rhs.testo;
    }

    bool operator!=(const Messaggio &rhs) const {
        return !(rhs == *this);
    }


private:
    bool read;
    std::string mittente;
    std::string destinatario;
    std::string testo;
    time_t currentTime;
};

#endif //ESAMELAB2020_MESSAGGIO_H
