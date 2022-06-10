//
// Created by shlom on 09/06/2022.
//
#include "Pitfall.h"

Pitfall::Pitfall():
        Card(CardType::Pitfall, m_stats, "Pitfall")
{}

void Pitfall::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}
