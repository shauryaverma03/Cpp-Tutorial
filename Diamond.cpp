# include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  // Diamond Code
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n-i; j++) {
      cout<<"  ";
    }
    for (int k=1; k<=i*2; k++) {
      cout<<"* ";
    }
  }
}
