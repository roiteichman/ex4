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
using std::cin;
using std::cout;
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
const char SPACE = ' ';

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

    int numOfPlayers;
    printStartGameMessage();
    do {
        printEnterTeamSizeMessage();
        cin >> numOfPlayers;
        if (numOfPlayers < 2 || numOfPlayers > 6) {
            printInvalidTeamSize();
        }
    } while (numOfPlayers < 2 || numOfPlayers > 6);

    char* nameAndRoll;

    printInsertPlayerMessage();



    string name;
    string roll;
    int j=0, k=0;
    for (int i = 0; i < numOfPlayers; ++i) {
        cin >> nameAndRoll;
        while (nameAndRoll[k]) {
            k++;
            if (nameAndRoll[k] == SPACE) {
                j = k;
            }
        }
        name.copy(nameAndRoll, j, 0);
        roll.copy(nameAndRoll, k-j-1 ,j+1);
        /// TO DO: checking legalization of the name and roll;
        //if(!roll)
          //  i--;
}

Card& strToCard(string str) {
    string cards[8] = {"Goblin", "Vampire", "Dragon", "Merchant", "Treasure", "Pitfall", "Barfight", "Fairy"};
    for (int i = 0; i <= NUM_OF_CARDS; ++i) {
        if (str.compare(cards[i])) {
            switch (i) {
                case (GOBLIN): {
                    Goblin *goblin = new Goblin();
                    return *goblin;
                }
                case (VAMPIRE): {
                    Vampire *vampire = new Vampire();
                    return *vampire;
                }
                case (DRAGON): {
                    Dragon *dragon = new Dragon();
                    return *dragon;
                }
                case (MERCHANT): {
                    Merchant *merchant = new Merchant();
                    return *merchant;
                }
                case (TREASURE): {
                    Treasure *treasure = new Treasure();
                    return *treasure;
                }
                case (PITFALL): {
                    Pitfall *pitfall = new Pitfall();
                    return *pitfall;
                }
                case (BARFIGHT): {
                    Barfight *barfight = new Barfight();
                    return *barfight;
                }
                case (FAIRY): {
                    Fairy *fairy = new Fairy();
                    return *fairy;
                }
            }
        }
    }
}