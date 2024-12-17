# include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"EWnter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;

    if (a>b && a>c) {
        cout<<a<<" is the largest";
    }
    else if (b>c && b>a) {
        cout<<b<<" is the largest";
    }
    else {
        cout<<c<<" is the largest";
    }
}
