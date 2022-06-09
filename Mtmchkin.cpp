//
// Created by teich on 09/06/2022.
//
#include "Mtmchkin.h"
#include "Queue.h"
#include "Card.h"
#include "Goblin.h"
#include "Vampire.h"
#include "Dragon.h"
#include "Merchant.h"
#include "Treasure.h"
#include "Pitfall.h"
#include "Barfight.h"
#include "Fairy.h"
#include <fstream>
using std::ifstream;
const int MAX_LENGTH = 16;
const int NUM_OF_CARDS = 6;
const int GOBLIN = 0;
const int VAMPIRE = 1;
const int DRAGON = 2;
const int MERCHANT = 3;
const int TREASURE = 4;
const int PITFALL = 5;
const int BARFIGHT = 6;
const int FAIRY = 7;

Card& strToCard(string str);

Mtmchkin::Mtmchkin(const std::string fileName)
{
    Queue<Card> m_queue;

    ifstream file(fileName);
    if (!file){
        /// throw Exception
    }
    char line[MAX_LENGTH];
    while(!file.getline(line, sizeof(line))){
        m_queue.pushBack(strToCard(line));
    }

}