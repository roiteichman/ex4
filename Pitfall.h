//
// Created by teich on 09/06/2022.
//
#include "Card.h"

#ifndef MTMCHKIN_H_PITFALL_H
#define MTMCHKIN_H_PITFALL_H

const int P_HP_LOSS=10; ///TO DO : when defeated by dragon the player is dead


class Pitfall : public Card {
public:
    Pitfall();
    ~Pitfall() = default;

protected:
    void print(ostream &os) const override;
private:
    CardStats m_stats = CardStats(IRRELEVANT, P_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT);
};

#endif //MTMCHKIN_H_PITFALL_H
