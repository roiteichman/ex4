//
// Created by teich on 04/05/2022.
//
#include "Card.h"
#include <iostream>


Card::Card(CardType type, const CardStats stats, std::string name):
    m_effect(type),
    m_stats(stats),
    m_name(name)
{}




ostream &operator<<(ostream &os, const Card &card) {
    card.print(os);
    return os;
}

void Card::print(ostream &os) const {}
