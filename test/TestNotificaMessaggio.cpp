//
// Created by Benedetta on 03/09/2020.

#include "gtest/gtest.h"
#include "../Chat.h"
#include "../NotificaMessaggio.h"

TEST(NotificaMessaggio, isAttivo) {
    Chat *c = new Chat();
    NotificaMessaggio m(true,c);
    ASSERT_TRUE(m.isAttivo());
    m.setAttivo(false);
    ASSERT_FALSE(m.isAttivo());
}