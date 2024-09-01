# include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the value of array: ";
  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  cout<<"Original Array: ";
  for (int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }

  cout<<endl;

  // swap
  for (int turns=0; turns<n-1; turns++) {
    for (int j=0; j<n-1-turns; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }  
    }
  }

  cout<<"The sorted arrary: ";

  for (int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
}
