#include <iostream>
#include "stackClassTemplate.h"
using namespace std;
int main(){
  STACK<int, 10> s;
  s.clearStack();
  s.pushStack(5);
  s.pushStack(10);
  s.pushStack(7);
  s.pushStack(12);
  while(!s.emptyStack()){
    int r = s.popStack();
    cout << r << endl;
  }
  return 0;
}
