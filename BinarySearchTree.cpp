#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
template<class T>
class BST{
private:
  struct node{
    T info;
    node *left, *right;
  };
  node *root;
public:
  BST(){
    root = NULL;
  }
  void insert(node* &p, T x){
    if(p == NULL){
      p = new node;
      p->info = x;
      p->left = NULL;
      p->right = NULL;
    }
    else{
      if(x < p->info){
        insert(p->left, x);
      }
      if(x > p->info){
        insert(p->right, x);
      }
    }
  }
  void displayInorder(node* p){
    if(p != NULL){
      displayInorder(p->left);
      cout << p->info << "\t";
      displayInorder(p->right);
    }
  }
  void displayPreorder(node* p){
    if(p != NULL){
      cout << p->info << "\t";
      displayPreorder(p->left);
      displayPreorder(p->right);
    }
  }
  void displayPostorder(node* p){
    if(p != NULL){
      displayPostorder(p->left);
      displayPostorder(p->right);
      cout << p->info << "\t";
    }
  }
  int CountNodes(node* p){
    if(p == NULL){
      return 0;
    }
    else{
      return 1 + CountNodes(p->left) + CountNodes(p->right);
    }
  }
  bool Search(node* p, T x){
    if(p == NULL){
      return false;
    }
    bool found = false;
    while(p != NULL && !found){
      if(p->info == x){
        found = true;
      }
      else if(p->info > x){
        p = p->left;
      }
      else{
        p = p->right;
      }
    }
    return found;
  }
  void destroyTree(node* p){
    if(p != NULL){ //postorder
      destroyTree(p->left);
      destroyTree(p->right);
      delete p;
      p = NULL;
    }
  }
  int maxx(int x, int y){
    if(x > y){
      return x;
    }
    else{
      return y;
    }
  }
  int treeHeight(node* p){
    if(p == NULL){
      return 0;
    }
    else{
      return 1 + maxx(treeHeight(p->left), treeHeight(p->right));
    }
  }
  bool Search(T x){ return Search(root, x); }
  void insert(T x){ insert(root, x); }
  void displayInorder(){ displayInorder(root); }
  void displayPreorder(){ displayPreorder(root); }
  void displayPostorder(){ displayPostorder(root); }
  int CountNodes(){ return CountNodes(root); }
  void destroyTree(){ destroyTree(root); }
  int treeHeight(){ return treeHeight(root); }
};
int main(){
  BST t;
  int a[6] = {50, 25, 60, 30, 10, 55};
  for(int i = 0; i < 6; i++){
    t.insert(a[i]);
  }
  cout << "This is the list of all nodes: ";
  t.display();
  cout << endl;
  if(t.Search(30)){
    cout << 30 << " is found\n";
  }
  else{
    cout << 30 << " does not exist\n";
  }
  if(t.Search(45)){
    cout << 45 << " is found\n";
  }
  else{
    cout << 45 << " does not exist\n";
  }
  int h = t.treeHeight();
  cout << "The height of tree = " << h << endl;
  t.destroyTree();
  return 0;
}
