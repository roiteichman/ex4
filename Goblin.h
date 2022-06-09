//
// Created by shlom on 09/06/2022.
//

#ifndef PLAYER_CPP_GOBLIN_H
#define PLAYER_CPP_GOBLIN_H
//
// Created by shlom on 09/06/2022.
//
#include "Card.h"

#ifndef PLAYER_CPP_VAMPIRE_H
#define PLAYER_CPP_VAMPIRE_H

const int FORCE=6;
const int HP_LOSS=10;
const int LOOT=2;
const int IRRELEVANT=0;

class Goblin : public Card{
public:
    Goblin();
    ~Goblin()=default;

private:
    CardStats m_stats = CardStats(FORCE, HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, LOOT);
};

#endif //PLAYER_CPP_VAMPIRE_H

#endif //PLAYER_CPP_GOBLIN_H
