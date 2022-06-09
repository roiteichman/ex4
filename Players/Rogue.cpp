//
// Created by shlom on 09/06/2022.
//

#include "Rogue.h"

void Rogue::addCoins(int n)
{
    if (n>0) {
        m_coins += 2*n;
    }
}