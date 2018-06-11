// Pointer implementation of an Ordered linked list
#include <iostream>
using namespace std;
template<class T>
class OrderedLinkedList{
private:
  struct NODE{
    T info;
    NODE *next;
  };
  NODE *list;
public:
  OrderedLinkedList(){
    list = NULL;
  }
  void insert(T x){ // Insert x and keep the list sorted
    NODE *p = list, *q = list, *r;
    // create a new node
    r = new NODE;
    r->info = x;
    r->next = NULL;
    // find the insertion place
    while(p != NULL && x > p->info){
      q = p;
      p = p->next;
    }
    if(p == list){ // x is the first info
      list = r;
      r->next = p;
    }
    else if(p == NULL){ // x is the last info
      q->next = r;
    }
    else{ // x is neither first nor last info
      r->next = p;
      q->next = r;
    }
  }
  void display(){ // display the list without using pop
    NODE *p = list;
    while(p != NULL){
      cout << p->info << "-->";
      p = p->next;
    }
    cout << "NULL\n";
  }
};
int main(){
  OrderedLinkedList<int> setA;
  setA.insert(20);
  setA.insert(5);
  setA.insert(11);
  setA.insert(9);

  setA.display();
  return 0;
}
