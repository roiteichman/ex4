//
// Created by shlom on 09/06/2022.
//
#include "Vampire.h"

Vampire::Vampire():
Card(CardType::Battle, CardStats(V_FORCE, V_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, V_LOOT), "Vampire")
{}

void Vampire::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printMonsterDetails(os, V_FORCE, V_HP_LOSS, V_LOOT, false);
    printEndOfCardDetails(os);
}
