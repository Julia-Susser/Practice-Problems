#include <iostream>
#include <vector>
using namespace std;

class Reverse {
  public:
  vector<int> vec;
  Reverse(vector<int> avec){
    vec = avec;
    run();
    Print_Vector();
  }
  void Print_Vector(){
    for (int i=0; i<vec.size();i++){
      cout << vec[i] << "  ";
    }
  }
  void run(){
    int indx;
    int temp;
    for (int i=0; i<vec.size()/2;i++){
      indx = vec.size()-1-i;
      temp = vec[i];
      vec[i] = vec[indx];
      vec[indx] = temp;
    }
  }


};

int main(){
  vector<int> vec = {1,2,3};
  Reverse myObj(vec);
  cout << "hey";



}
