//
// Created by shlom on 09/06/2022.
//
#include "Treasure.h"

Treasure::Treasure():
        Card(CardType::Treasure, m_stats, "Treasure")
{}

void Treasure::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}
