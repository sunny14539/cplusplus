#include <iostream>
using namespace std;
class HASH{
private:
  struct node{
    int info;
    node *next;
  };
  node *H[5];
public:
  HASH(){
    for(int i = 0; i < 5; i++){
      H[i] = NULL;
    }
  }
  int hashFunc(int data){
    return data % 5;
  }
  void insert(int data){
    int i = hashFunc(data);
    node *q = new node; q->info = data;
    q->next = H[i];
    H[i] = q;
  }
  void search(int data){
    int i = hashFunc(data);
    node *p = H[i];
    while(p != NULL){
      if(p->info == data){
        break;
      }
      p = p->next;
    }
    if(p == NULL){
      cout << "Data does not exist\n";
    }
    else{
      cout << data << " is found\n";
    }
  }
  void displayHashTable(){
    node *p;
    for(int i = 0; i < 5; i++){
      cout << "H[" << i << "]-->";
      p = H[i];
      while(p != NULL){
        cout << p->info << "-->";
        p = p->next;
      }
      cout << "NULL\n";
    }
  }
};
int main(){
  HASH h;
  int a[10] = {3, 10, 12, 20, 23, 44, 7, 9, 11, 21};
  for(int i = 0; i < 10; i++){
    h.insert(a[i]);
  }
  h.search(10);
  h.search(1);
  h.search(6);
  h.search(44);
  h.displayHashTable();
  return 0;
}
