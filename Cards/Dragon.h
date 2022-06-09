//
// Created by shlom on 09/06/2022.
//

#include "Card.h"

#ifndef PLAYER_CPP_DRAGON_H
#define PLAYER_CPP_DRAGON_H

const int D_FORCE=25;
const int D_HP_LOSS=0; ///TO DO : when defeated by dragon the player is dead
const int D_LOOT=1000;

class Dragon : public Card{
public:
    Dragon();
    ~Dragon() override =default;

protected:
    void print(ostream &os) const override;

private:
    CardStats m_stats = CardStats(D_FORCE, D_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, D_LOOT);
};



#endif //PLAYER_CPP_DRAGON_H
