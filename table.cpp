# include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter value of n: ";
  cin>>n;
  for (int i=1; i<=10; i++) {
    cout<<n<<" X "<<i<<" = "<<i*n;
  }
}
