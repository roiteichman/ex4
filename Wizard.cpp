//
// Created by teich on 09/06/2022.
//

#include "Wizard.h"

Wizard::Wizard(const char *name, int hp, int force):
Player(name, hp, force)
{}


void Wizard::heal(int n)
{
    if (n>0) {
        if (m_hp + 2*n <= m_maxHP) {
            m_hp += 2*n;
        } else {
            m_hp = m_maxHP;
        }
    }
}
