#include <iostream>
using namespace std;
class STACK{
  private:
    int a[5];
    int counter;
  public:
    void clearStack(){
      counter = 0;
    }
    bool fullStack(){
      if(counter == 5){
        return true;
      }
      return false;
    }
    bool emptyStack(){
      if(counter == 0){
        return true;
      }
      return false;
    }
    void pushStack(int x){
      a[counter] = x;
      counter++;
    }
    int popStack(){
      counter--;
      return a[counter];
    }
};
int main(){
  STACK s;
  s.clearStack();
  s.pushStack(5);
  s.pushStack(10);
  s.pushStack(7);
  while(!s.emptyStack()){
    int r = s.popStack();
    cout << r << endl;
  }
  return 0;
}
