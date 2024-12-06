# include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    try{
        if (age >= 18) {
            cout<<"You are eligible to vote";
        }
        else {
            throw(age);
        }
    }
    catch (int num) {
        cout<<"Your age is "<<num<<" you can't vote"<<endl;
        cout<<"You can't drive"<<endl;
    }

    return 0;
}
