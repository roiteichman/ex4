//
// Created by shlom on 09/06/2022.
//

#include "Card.h"

#ifndef PLAYER_CPP_DRAGON_H
#define PLAYER_CPP_DRAGON_H

const int FORCE=25;
const int HP_LOSS=0; ///TO DO : when defeated by dragon the player is dead
const int LOOT=1000;
const int IRRELEVANT=0;

class Dragon : public Card{
public:
    Dragon();
    ~Dragon() override =default;

protected:
    void print(ostream &os) const override;

private:
    CardStats m_stats = CardStats(FORCE, HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, LOOT);
};



#endif //PLAYER_CPP_DRAGON_H
