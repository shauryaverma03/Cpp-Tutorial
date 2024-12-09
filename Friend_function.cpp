# include <iostream>
using namespace std;

class Complex{
    int a,b;
    
    public:
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        // Below line  means that nonmember - sumcomplex function is aloowed to do anything with my private parts

        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber() {
            cout<<"Your number is "<<a<<" + "<<b<<"i";
        }
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o2.b + o2.b));
    return o3;
}

int main() {
    Complex c1,c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    cout<<endl;
    c2.printNumber();

    cout<<endl;
    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}
