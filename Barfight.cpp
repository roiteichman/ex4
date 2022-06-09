//
// Created by teich on 09/06/2022.
//

#include "Barfight.h"

Barfight::Barfight():
        Card(CardType::Battle, m_stats, "Pitfall")
{}

void Barfight::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}
