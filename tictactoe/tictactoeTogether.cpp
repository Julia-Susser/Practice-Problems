#include <iostream>
#include <vector>
#define value 3;
using namespace std;
//this Board really has to be a base class like can work on its own and all varaibles used in it have to be defined within
//g++ -std=c++11 tictactoeTogether.cpp
class Board{
  public:
    vector <vector<int> > board;
    int N;

    Board(int n){
      N = n;
      createBoard();
    }
    Board(){
      N = 3;
      createBoard();
    }
    void printBoard(){
      cout << "\n";
      vector<int> row;
      for (int i=0; i<board.size(); i++){
        row = board[i];
        for (int k=0; k<row.size(); k++){
          cout << row[k] << " ";
        }
        cout << "\n";
      }
    }
    void createBoard(){
      for (int i=0; i<N; i++){
        vector<int> newRow(N);
        board.push_back(newRow);
      }
    }
};




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

bool Game::GameOver(){
  bool possible = true;
  for (int i=0; i<N; i++){

    for (int k=1; possible && k<N; k++){
      if (board[i][k-1] != board[i][k] | board[i][k]==0){
        possible = false;
      }
    }
    if (possible){ return true; }

    possible = true;

    for (int k=1; possible && k<N; k++){
      if (board[k-1][i] != board[k][i] | board[k][i]==0){
        possible = false;
      }
    }

    if (possible){ return true; }
    possible = true;

  }
  for (int i=1; i<N; i++){
    if (board[i-1][i-1] != board[i][i] | board[i][i]==0){
      possible = false;
    }
  }
  if (possible){ return true; }
  possible = true;

  for (int i=1; i<N; i++){
    if (board[i-1][N-1-i+1] != board[i][N-1-i] | board[i][N-1-i]==0){
      possible = false;
    }
  }
  if (possible){return true; }

  return false;
}



int main(){
  Game myGame;
  myGame.run();
}
