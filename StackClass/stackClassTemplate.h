#ifndef STACKLIB
#define STACKLIB
template <class T, int n>
class STACK{
private:
  T a[n];
  int counter;
public:
  void clearStack();
  bool emptyStack();
  bool fullStack();
  void pushStack(T x);
  T popStack();
};
template <class T, int n>
void STACK<T, n> :: clearStack(){
  counter = 0;
}
template <class T, int n>
bool STACK<T, n> :: emptyStack(){
  return (counter == 0) ? true : false;
}
template <class T, int n>
bool STACK<T, n> :: fullStack(){
  return (counter == n) ? true : false;
}
template <class T, int n>
void STACK<T, n> :: pushStack(T x){
  a[counter] = x;
  counter++;
}
template <class T, int n>
T STACK<T, n> :: popStack(){
  counter--;
  return a[counter];
}
#endif
