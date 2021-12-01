#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
  int n = 0, c = 2;
  
  cin >> n;
  
  if(primo(n, c))
  {
    cout << "numero primo" << endl;
  }
  else
  {
    cout << "numero non primo" << endl;
  }
  
  return 0;
}
