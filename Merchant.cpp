//
// Created by shlom on 09/06/2022.
//

//
// Created by shlom on 09/06/2022.
//
#include "Merchant.h"

Merchant::Merchant():
        Card(CardType::Battle, m_stats, "Merchant")
{}

void Merchant::print(ostream &os) const
{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}
