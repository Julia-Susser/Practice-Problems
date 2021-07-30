#include <iostream>
#include <vector>
#define value 3;
using namespace std;
//this Board really has to be a base class like can work on its own and all varaibles used in it have to be defined within

#include "game.h"
//g++ -c gameOver.cpp
//g++ -c tictactoe.cpp
//g++ tictactoe.o gameOver.o
int main(){
  Game myGame;
  myGame.run();
}
