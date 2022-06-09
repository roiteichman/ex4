//
// Created by shlom on 09/06/2022.
//
#include "Vampire.h"

Vampire::Vampire():
Card(CardType::Battle, m_stats)
{}

void Vampire::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printMonsterDetails(os, V_FORCE, V_HP_LOSS, V_LOOT, false);
    printEndOfCardDetails(os);
}
