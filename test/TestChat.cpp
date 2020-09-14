//
// Created by Benedetta on 03/09/2020.
//

#include "gtest/gtest.h"
#include "../Chat.h"
#include "../Messaggio.h"


TEST(MessaggioChat,isRead){
    Messaggio m("Benedetta", "Lisa","Ciao", false);
    ASSERT_EQ(false,m.isRead());
}

TEST(Chat,Eccezione){
    Messaggio mes ("Alice","Elisa", "Ciao Elisa, come va?");
    Chat chat= Chat();
    chat.aggiungiMessaggio(mes);
    ASSERT_EQ(chat.ultimoMessaggio(),mes);
    ASSERT_THROW(chat.leggiMessaggio(2),std::out_of_range);

}

TEST(Chat, check){
    Messaggio mes ("Alice","Elisa", "Ciao Elisa, come va?");
    std::string s= "Ciao Elisa, come va?";
    Chat chat= Chat();
    ASSERT_EQ(chat.check("Ciao"), false);
    ASSERT_EQ(chat.check("Ciao Elisa, come va?"), true);

}



