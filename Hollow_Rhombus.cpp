# include <iostream>
using namespace std;

int main() {
  int  n;
  cout<<"Enter the value of n: ";
  cin>>n;

  for (int i=1; i<=n; i++) {
    for (int j=1; j<n-i; j++) {
      cout<<"  ";
    }
    for (int k=1; k<=n; k++) {
      if (i == 1 || i == n || j == 1 || j == n) {
        cout<<"* ";
      }
      else {
        cout<<"  ";
      }
    }
  cout<<endl;
  }
}
