//
// Created by Benedetta on 03/09/2020.
//

#include "gtest/gtest.h"
#include "../Utente.h"

TEST(Utente,TestUtente){
    Utente utente("Luca");
    ASSERT_EQ(utente.getNome(), "Luca");
    utente.setNome("Paolo");
    ASSERT_EQ(utente.getNome(), "Paolo");
}