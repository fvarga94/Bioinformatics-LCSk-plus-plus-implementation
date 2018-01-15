#include <iostream>
#include <fstream>
#include <vector>

#include "LCSkpp.h"

using namespace std;


int main(int argc, char const *argv[]) {

    if(argc != 3) {
        cerr<< "Required 1 file with 2 sequences and k value"<<endl;
        return -1;
    }

    ifstream input (argv[1]);

    string line;

    string a;
    getline(input, line);
    a = line;
    string b;
    getline(input,line);
    b = line;

    int k=atoi(argv[2]);
    string reconstructed;
    int lcskpp_value = LCSkpp(a, b, k, reconstructed); 
    
    cout<<lcskpp_value<<endl;

    cout<<reconstructed<<endl;

    cout<<reconstructed.size()<<endl;
    return 0;
}
