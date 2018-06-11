// Linked list implementations of stack
#include <iostream>
using namespace std;
template <class T>
class STACK_LIST{
private:
  struct node{
    T info;
    node *next;
  };
  node *stack;
public:
  STACK_LIST(){
    stack = NULL;
  }
  // Add a node at the front of list
  void pushs(T x){
    node *p;
    p = new node;
    p->info = x;
    p->next = NULL;
    if(stack == NULL){
      stack = p;
    }
    else{
      p->next = stack;
      stack = p;
    }
  }
  // Test whether stack is empty or not
  bool Emptys(){
    if(stack == NULL){
      return true;
    }
    else{
      return false;
    }
  }
  // Pop the first node
  T pops(){
    node *p = stack;
    T x;
    x = stack->info;
    stack = stack->next;
    delete(p);
    return x;
  }
};
int main(){
  STACK_LIST<int> S;
  S.pushs(10);
  S.pushs(20);
  S.pushs(30);
  while(!S.Emptys()){
    int x = S.pops();
    cout << x << "-->";
  }
  cout << "NULL" << endl;
}
