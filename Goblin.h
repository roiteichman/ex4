//
// Created by shlom on 09/06/2022.
//
#include "Card.h"

#ifndef PLAYER_CPP_GOBLIN_H
#define PLAYER_CPP_GOBLIN_H

const int G_FORCE=6;
const int G_HP_LOSS=10;
const int G_LOOT=2;

class Goblin : public Card{
public:
    Goblin();
    ~Goblin() override =default;

protected:
    void print(ostream &os) const override;

private:
    CardStats m_stats = CardStats(G_FORCE, G_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, G_LOOT);
};

#endif //PLAYER_CPP_GOBLIN_H
