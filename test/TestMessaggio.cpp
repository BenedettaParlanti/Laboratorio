//
// Created by Benedetta on 03/09/2020.
//

#include "gtest/gtest.h"
#include "../Messaggio.h"


TEST(Messaggio, TestMessaggio){
    Messaggio mes("Benedetta", "Lisa", "Ciao Lisa, come va?");
    ASSERT_EQ(mes.getMittente(), "Benedetta");
    ASSERT_EQ(mes.getDestinatario(), "Lisa");
    ASSERT_EQ(mes.getTesto(), "Ciao Lisa, come va?");
    ASSERT_EQ(mes.isRead(), false);
    mes.setRead(true);
    ASSERT_EQ(mes.isRead(), true);

}
