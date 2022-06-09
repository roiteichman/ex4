//
// Created by shlom on 09/06/2022.
//
#include "Card.h"

#ifndef CARD_CPP_TREASURE_H
#define CARD_CPP_TREASURE_H

const int V_LOOT=10;

class Treasure : public Card{
public:
    Treasure();
    ~Treasure() override =default;

protected:
    void print(ostream &os) const override;


private:
    CardStats m_stats = CardStats(IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT, V_LOOT);
};
#endif //CARD_CPP_TREASURE_H
