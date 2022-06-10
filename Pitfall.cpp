//
// Created by shlom on 09/06/2022.
//
#include "Pitfall.h"

Pitfall::Pitfall():
        Card(CardType::Pitfall, CardStats(IRRELEVANT, P_HP_LOSS, IRRELEVANT, IRRELEVANT, IRRELEVANT, IRRELEVANT), "Pitfall")
{}

void Pitfall::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}
