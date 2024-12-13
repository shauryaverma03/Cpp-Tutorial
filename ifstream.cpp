# include <iostream>
# include <fstream>

using namespace std;

int main() {
    ifstream fin;
    // file ko open karo
    fin.open("zoom.txt");
    // fir read karo
    char c;
    //fin>>c;
    c = fin.get();

    while (!fin.eof()) {
        cout<<c;
        // fin>>c;
        c = fin.get();
    }

    fin.close();

}
