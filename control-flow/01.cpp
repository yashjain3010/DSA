#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    char c;
  cout << "Enter the character: ";
  cin >> c;

  if(c >= 97 && c <= 122){
    cout << "Lowercase" << endl;
  } else if(c >= 65 && c <= 90){
    cout << "Uppercase" << endl;
  } else if(c >= 49 && c <= 58){
    cout << "Digit" << endl;
  } else{
    cout << "Special Character" << endl;
  }

  return 0;
}