#include <iostream>
#include <vector>
using namespace std;
string remove_i_from_String(string myString, int i){
  myString = myString.substr(0,i) + myString.substr(i+1,myString.length());
  return myString;
}
vector<string> Permutations(string myString){
  vector<string> finalPerms;
  if (myString.length()==1){
    finalPerms.push_back(myString);
    return finalPerms;
  }

  for (int i=0; i<myString.length(); i++){
    string newString = remove_i_from_String(myString,i);
    vector <string> perms = Permutations(newString);
    for (int k=0; k<perms.size();k++){
      finalPerms.push_back(myString[i] + perms[k]);
    }
  }
  return finalPerms;
  cout << myString.length();
}
void PrintPermutations(vector<string> Permutations){
  for (int i = 0; i < Permutations.size(); i++ ){
    cout << Permutations[i] << "\n";

}
}

int main(){
  string myString;
  // cout <<  "Enter String:  ";
  // cin >> myString;
  myString = "ABC";
  vector <string> finalPerms = Permutations(myString);

  PrintPermutations(finalPerms);

}
