#include <iostream>
using namespace std;
class FRACT{
private:
  int n, d;
public:
  void readFract(){
    cout << "Enter a fraction: ";
    cin >> n;
    cin.ignore();
    cin >> d;
  }
  //Overload the + operator
  friend FRACT operator +(FRACT f1, FRACT f2){
    //Compute f = f1 + f2
    FRACT f;
    f.n = f1.n * f2.d + f1.d * f2.n;
    f.d = f1.d * f2.d;
    return f;
  }
  //Overload the - operator
  friend FRACT operator -(FRACT f1, FRACT f2){
    //Compute f = f1 - f2
    FRACT f;
    f.n = f1.n * f2.d - f1.d * f2.n;
    f.d = f1.d * f2.d;
    return f;
  }
  //Overload the * operator
  friend FRACT operator *(FRACT f1, FRACT f2){
    //Compute f = f1 * f2
    FRACT f;
    f.n = f1.n * f2.n;
    f.d = f1.d * f2.d;
    return f;
  }
  //Overload the / operator
  friend FRACT operator /(FRACT f1, FRACT f2){
    //Compute f = f1 / f2
    FRACT f;
    f.n = f1.n * f2.d;
    f.d = f1.d * f2.n;
    return f;
  }
  void displayFract(){
    cout << n << "/" << d;
  }
};
int main(){
  FRACT f1, f2, f;
  f1.readFract();
  f2.readFract();

  f = f1 + f2;
  f1.displayFract();
  cout << " + ";
  f2.displayFract();
  cout << " = ";
  f.displayFract();
  cout << "\n";

  f = f1 - f2;
  f1.displayFract();
  cout << " - ";
  f2.displayFract();
  cout << " = ";
  f.displayFract();
  cout << "\n";

  f = f1 * f2;
  f1.displayFract();
  cout << " * ";
  f2.displayFract();
  cout << " = ";
  f.displayFract();
  cout << "\n";

  f = f1 / f2;
  f1.displayFract();
  cout << " / ";
  f2.displayFract();
  cout << " = ";
  f.displayFract();
  cout << "\n";
  return 0;
}
