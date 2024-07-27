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
    for (int k=1; k<=i; k++) {
      cout<<"* ";
    }
    for (int l=2; l<=i; l++) {
      cout<<"* ";
    }
    cout<<endl;
  }

  for (int i=n; i<=1; i--) {
    for (int j=1; j<=n-i; j++) {
      cout<<"  ";
    }
    for (int k=1; k<=i; k++) {
      cout<<"* ";
    }
    for (int l=2; l<=i; l++) {
      cout<<"* ";
    }
    cout<<endl;
  }
  
}
