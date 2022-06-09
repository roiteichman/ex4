//
// Created by teich on 09/06/2022.
//

#include "Card.h"

#ifndef MTMCHKIN_H_FAIRY_H
#define MTMCHKIN_H_FAIRY_H

const int F_HEAL=10; /// TO DO: decrease 10 HP for everyone who not the Rogue

class Fairy : public Card{
public:
    Fairy();
    ~Fairy() override =default;

protected:
    void print(ostream &os) const override;

private:
    CardStats m_stats = CardStats(IRRELEVANT, IRRELEVANT, IRRELEVANT, F_HEAL, IRRELEVANT, IRRELEVANT);
};


#endif //MTMCHKIN_H_FAIRY_H
