//
// Created by shlom on 09/06/2022.
//

#include "Dragon.h"

Dragon::Dragon():
        Card(CardType::Battle, m_stats)
{}

void Dragon::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printMonsterDetails(os, D_FORCE, D_HP_LOSS, D_LOOT, true);
    printEndOfCardDetails(os);
}
