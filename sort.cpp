#include<iostream>
using namespace std;

int * BubbleSort(int list[], int size){

  for (int i = 0; i<size; i++){
    for (int k = i-1; k>=0; k--){
      if (list[i]<list[k]){
        int old = list[i];
        list[i] = list[k];
        list[k] = old;
      }
      //cout << k << "  " << i << "\n";
    }
  }
  return list;

}
int main() {
  int cars[] = {1,5,4,10};
  int size = sizeof(cars)/sizeof(cars[0]);

  BubbleSort(cars,size);
  for (int i=0; i<size;i++){
    cout << cars[i];
  }
}
