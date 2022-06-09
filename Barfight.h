//
// Created by teich on 09/06/2022.
//

#include "Card.h"

#ifndef MTMCHKIN_H_BARFIGHT_H
#define MTMCHKIN_H_BARFIGHT_H

const int BF_HP_LOSS=10; /// TO DO: decrease 10 HP for everyone who not the Rogue

class Barfight : public Card{
public:
    Barfight();
    ~Barfight() override =default;

protected:
    void print(ostream &os) const override;


private:
    CardStats m_stats = CardStats(IRRELEVANT, BF_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT);
};

#endif //MTMCHKIN_H_BARFIGHT_H
