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
using std::ofstream;
using std::cin;
using std::cout;
using std::endl;
const int MAX_LENGTH = 16;
const int NUM_OF_CARDS = 8;
const int GOBLIN = 0;
const int VAMPIRE = 1;
const int DRAGON = 2;
const int MERCHANT = 3;
const int TREASURE = 4;
const int PITFALL = 5;
const int BARFIGHT = 6;
const int FAIRY = 7;
const int MAX_CHARACTER = 15;
const int NUM_OF_PLAYERS = 3;
const char SPACE = ' ';
const string CARDS_STR[8] = {"Goblin", "Vampire", "Dragon", "Merchant", "Treasure", "Pitfall", "Barfight", "Fairy"};
const string PLAYERS_STR[3] = {"Rogue", "Wizard", "Fighter"};

Card& strToCard(string str);
bool check_number(string str);

Mtmchkin::Mtmchkin(const std::string fileName) {

    //creates a cards queue
    string CARDS[8] = {"Goblin", "Vampire", "Dragon", "Merchant", "Treasure", "Pitfall", "Barfight", "Fairy"};

    Queue<Card> m_queue;
    //string line;
    for(int i=0; i<7; i++) {
        m_queue.pushBack(strToCard((CARDS[i])));
    }

    //gets the team size
    string str_numOfPlayers;
    int numOfPlayers;
    printStartGameMessage();
    bool isValid;
    do {
        printEnterTeamSizeMessage();
        cin >> str_numOfPlayers;
        isValid = check_number(str_numOfPlayers);
        if (isValid){
            numOfPlayers = std::stoi(str_numOfPlayers);
        }
        if (numOfPlayers < 2 || numOfPlayers > 6) {
            printInvalidTeamSize();
        }
    } while (numOfPlayers < 2 || numOfPlayers > 6 || !isValid);

    //check the validity of the name and the roll
    string name;
    string roll;
    int j=MAX_CHARACTER, k=0;
    for (int i = 0; i < numOfPlayers; ++i) {
        printInsertPlayerMessage();
        {
            cin >> name;
            cin >> roll;

            if (name.length() >= MAX_CHARACTER) {
                i--;
                printInvalidName();
            } else {
                for (int p = 0; p < NUM_OF_PLAYERS; ++p) {
                    if (!(PLAYERS_STR[p].compare(roll))) {
                        break;
                    }
                    if (p == NUM_OF_PLAYERS-1) {
                        i--;
                        printInvalidClass();
                    }
                }
            }
        }
    }
}


Card& strToCard(string str)
{
    for (int i = 0; i < NUM_OF_CARDS; ++i) {
        if (!str.compare(CARDS_STR[i])) {
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
    Fairy *fairy1 = new Fairy;
    return *fairy1;
}



bool check_number(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}