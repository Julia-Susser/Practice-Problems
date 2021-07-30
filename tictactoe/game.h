
#include "Board.h"

class Game: public Board
{
  public:
    int person = 1;

    Game(int n):Board(n){}
    Game(){}
    bool GameOver();
    void run(){
      bool fin = false;
      for (int i=0; !fin;i++){
        makeMove();
        printBoard();
        fin = GameOver();
      }
    }

    void makeMove(){
      int row;
      int col;
      cout << "Row: ";
      cin >> row;
      cout << "Col: ";
      cin >> col;
      board[row-1][col-1] = person;
      //changePerson();
    }
    void changePerson(){
      if (person == 1){
        person = 2;
      }else{
        person = 1;
      }
    }
};
