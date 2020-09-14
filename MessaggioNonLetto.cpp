//
// Created by Benedetta on 02/09/2020.
//

#include <iostream>
#include "MessaggioNonLetto.h"

void MessaggioNonLetto::attach(){
    subject->subscribe(this);
}

void MessaggioNonLetto::detach() {
    subject->subscribe(this);
}

void MessaggioNonLetto::update() {
    this->draw(subject->getMessaggioNonLetto());
}

void MessaggioNonLetto::draw(int um){
    if(um!=umLocal) {
        std::cout << "<<< Messaggi non letti: " << um << " >>> " << std::endl;
        umLocal = um;
    }
}