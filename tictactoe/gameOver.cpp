
#include <iostream>
#include <vector>
using namespace std;
#include "game.h" // can only include .h files

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
