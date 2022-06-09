//
// Created by shlom on 09/06/2022.
//
#include "Goblin.h"

Goblin::Goblin():
        Card(CardType::Battle, m_stats)
{}

void Goblin::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printMonsterDetails(os, G_FORCE, G_HP_LOSS, G_LOOT, false);
    printEndOfCardDetails(os);
}

