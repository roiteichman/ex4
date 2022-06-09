//
// Created by shlom on 09/06/2022.
//
#include "Card.h"

#ifndef PLAYER_CPP_VAMPIRE_H
#define PLAYER_CPP_VAMPIRE_H

const int V_FORCE=10;
const int V_HP_LOSS=10;
const int V_LOOT=2;

class Vampire : public Card{
public:
    Vampire();
    ~Vampire() override =default;

protected:
    void print(ostream &os) const override;


private:
    CardStats m_stats = CardStats(V_FORCE, V_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, V_LOOT);
};

#endif //PLAYER_CPP_VAMPIRE_H
