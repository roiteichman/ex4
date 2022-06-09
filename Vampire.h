//
// Created by shlom on 09/06/2022.
//
#include "Card.h"

#ifndef PLAYER_CPP_VAMPIRE_H
#define PLAYER_CPP_VAMPIRE_H

const int FORCE=10;
const int HP_LOSS=10;
const int LOOT=2;
const int IRRELEVANT=0;

class Vampire : public Card{
public:
    Vampire();
    ~Vampire()=default;

private:
    CardStats m_stats = CardStats(FORCE, HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, LOOT);
};

#endif //PLAYER_CPP_VAMPIRE_H
