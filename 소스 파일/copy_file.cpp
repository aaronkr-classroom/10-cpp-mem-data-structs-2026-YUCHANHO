// copy_file.cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream infile("in");
    ofstream outfile("out");
    
    string s;
    
    while (getline(infile, s)) {
        outfile << s << endl;
    }
    
    return 0;
}