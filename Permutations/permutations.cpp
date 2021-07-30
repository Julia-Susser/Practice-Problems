#include<iostream>
#include<vector>
using namespace std;
//g++ -std=c++11 permutations.cpp
void remove_i_from_arr(int arr[], int size, int indx, int temp[]){
  int k = 0;
  for (int i = 0; i < size; i++ ){
    if (i != indx){
      temp[k] = arr[i];
      k = k+1;
    }
  }
}
void printArray(int arr[],int size){
  cout << "\n";
  for (int i = 0; i < size; i++ ){
    cout << arr[i] << "  ";
  }
  cout << "\n";
}
// void copyArray(int array[], int final[], int size){
//   for (int i = 0; i < size; i++ ){
//     array[i] = final[i];
//   }
// }
vector<int> copyArray(int final[], int size){
  vector<int> perm;
  for (int i = 0; i < size; i++ ){
    perm.push_back(final[i]);
  }
  return perm;
}
bool permutations(int final[], int indx, int leftover[], int leftoverSize, vector<vector<int> > &Permutations){
  //Arrays are immediately a reference wheras vectors are not.
  if (leftoverSize == 0){
    vector<int> perm = copyArray(final,indx);
    Permutations.push_back(perm);
    return true;
  };
  for (int i = 0; i < leftoverSize; i++ ){
    final[indx] = leftover[i];
    int temp[leftoverSize-1];
    remove_i_from_arr(leftover, leftoverSize, i, temp);
    permutations(final, indx+1,temp,leftoverSize-1,Permutations);

  }
  return false;
}

void PrintPermutations(vector<vector<int> > Permutations, int size){
  for (int i = 0; i < Permutations.size(); i++ ){
    cout << "\n";
    for (int k=0; k<size;k++){
      cout << Permutations[i][k] << "  ";
    }

}
}

int main(){

  vector<vector<int> > Permutations;
  int arr[3] = {0,1,2};
  //Permutations.push_back(arr);
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << size;
  int final[size];
  bool p = permutations(final, 0, arr,size,Permutations);


  cout << Permutations.size();
  cout << Permutations[0][0];
  PrintPermutations(Permutations,size); // Problem

  //permutations();
}
