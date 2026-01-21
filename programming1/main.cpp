#include <iostream>
#include "bar.h"
#include "foo.h"
#include "foobar.h"
#include <fstream>
#include <sstream>

#using namespace std


int main() {
    vector<Foobar>* Foobars;
    cout << "Enter your input filename:\n";
    string input;
    cin >> input;

    processInput(input, Foobars);

    cout << "Enter your output filename:\n";
    string output;
    cin >> output;

    


    return 0;
}

int processInput(string input, vector<Foobar>* foobars) {
    ifstream infile; // sourced from https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
    infile.open(input);
    string line;

    int count;
    
    while (getline(infile, line)) {
        stringstream current(line); 
        std::string word;
        while (current >> word) {
            switch word 
        }
    }
}
