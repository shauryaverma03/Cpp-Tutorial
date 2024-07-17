# include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int arr[n];

  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  cout<<endl;
  
  for (int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
}
