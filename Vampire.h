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

};

#endif //PLAYER_CPP_VAMPIRE_H
