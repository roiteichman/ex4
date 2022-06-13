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

void Card::applyEncounter(Player &player) const
{
    switch (m_effect) {
        case CardType::Battle :
            if(player.getAttackStrength() >= m_stats.force){
                player.levelUp();
                player.addCoins(m_stats.loot);
                printBattleResult(true);
            }
            else{
                player.damage(m_stats.hpLossOnDefeat);
                printBattleResult(false);
            }
            break;
        case CardType::Buff :
            if (player.pay(m_stats.cost)){
                player.buff(m_stats.buff);
            }
            break;
        case CardType::Heal :
            if (player.pay(m_stats.cost)){
                player.heal(m_stats.heal);
            }
            break;
        case CardType::Treasure :
            player.addCoins(m_stats.loot);
            break;
    }
}


ostream &operator<<(ostream &os, const Card &card) {
    card.print(os);
    return os;
}

void Card::print(ostream &os) const {}
