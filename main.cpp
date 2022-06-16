//
// Created by shlom on 09/06/2022.
//
#include "Mtmchkin.h"
int main(){

    Mtmchkin game("C:\\Users\\teich\\Documents\\technion\\semester 2\\matam\\projects\\hw4\\deck.txt");

        while(!game.isGameOver()) {
            game.playRound();

        }
}
