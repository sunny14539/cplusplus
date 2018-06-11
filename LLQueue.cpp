// Linked list implementations of queue (FIFO)
#include <iostream>
using namespace std;
template <class T>
class QUEUE_LIST{
private:
  struct node{
    T info;
    node *next;
  };
  node *front, *rear;
public:
  QUEUE_LIST(){
    front = NULL;
    rear = NULL;
  }
  // Add a node at the rear of the queue
  void pushq(T x){
    node *p;
    p = new node;
    p->info = x;
    p->next = NULL;
    if(front == NULL){
      front = p;
      rear = p;
    }
    else{
      rear->next = p;
      rear = p;
    }
  }
  // Test whether queue is empty or not
  bool Emptyq(){
    if(front == NULL){
      return true;
    }
    else{
      return false;
    }
  }
  // Pop the first node
  T popq(){
    node *p = front;
    T x;
    x = front->info;
    front = front->next;
    delete(p);
    return x;
  }
};
int main(){
  QUEUE_LIST<int> Q;
  Q.pushq(10);
  Q.pushq(20);
  Q.pushq(30);
  while(!Q.Emptyq()){
    int x = Q.popq();
    cout << x << "-->";
  }
  cout << "NULL" << endl;
}
