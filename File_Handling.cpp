# include <iostream>
# include <fstream>

using namespace std;

// ofstream

int main() {
    // file ko open karna
    ofstream fout;
    fout.open("zoom.txt");  // create kar dega phir open kr dega
    // write kar sakta hu
    fout<<"Hello India";

    fout.close();  // Resources release kar paauon
}
