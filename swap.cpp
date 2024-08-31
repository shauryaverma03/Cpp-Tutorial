# include <iostream>
using namespace std;

int main() {
  int a;
  cout<<"Enter the value of a: ";
  cin>>a;

  int b;
  cout<<"Enter the value of b: ";
  cin>>b;

  // Swap
  int temp = a;
  a = b;
  b = temp;

  cout<<"Swapped value are: "<<a<<" "<<b;
}
