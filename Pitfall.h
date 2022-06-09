//
// Created by teich on 09/06/2022.
//
#include "Card.h"

#ifndef MTMCHKIN_H_PITFALL_H
#define MTMCHKIN_H_PITFALL_H

const int P_HP_LOSS=10; /// TO DO: decrease 10 HP for everyone who not the Rogue

class Pitfall : public Card{
public:
    Pitfall();
    ~Pitfall() override =default;

protected:
    void print(ostream &os) const override;


private:
    CardStats m_stats = CardStats(IRRELEVANT, P_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT);
};
#endif //MTMCHKIN_H_PITFALL_H
