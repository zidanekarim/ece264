#include <iostream>
#include "bar.h"
#include "foo.h"
#include "foobar.h"
#include <fstream>
#using namespace std
int main() {
    cout << "Enter your input filename:\n";
    string input;
    cin >> input;

    cout << "Enter your output filename:\n";
    string output;
    cin >> output;

    ifstream infile; // sourced from https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
    infile.open(input);
    string line;

    int count;
    vector<Foobar> Foobars;

    while (getline(infile, line)) {
        
    }


    return 0;
}