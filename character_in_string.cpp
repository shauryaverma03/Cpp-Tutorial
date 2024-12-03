# include <iostream>
# include <string>
using namespace std;

int main() {
    string inp;
    char ch;
    
    cin>>inp;
    cin>>ch;
    
    int count = 0;
    for (char c : inp) {
        if (c == ch) {
            count++;
        }
    }
    
    cout<<count;
}
