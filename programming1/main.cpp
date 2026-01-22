#include <iostream>
#include "bar.h"
#include "foo.h"
#include "foobar.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int processInput(string input, vector<Foobar>* foobars, int* count);
int updateStrengths(vector<Foobar>* foobars, int count);
int processOutput(string output, vector<Foobar>* foobars, int count);

int main() {
    vector<Foobar>* Foobars;
    cout << "Enter your input filename:\n";
    string input;
    cin >> input;

    int count = 0;
    if (processInput(input, Foobars, &count) == 0) {
        cout << "Input file processed successfully.\n";
    } else {
        cout << "Error processing file.\n";
        return 1;
    }

    cout << "Enter your output filename:\n";
    string output;
    cin >> output;

    updateStrengths(Foobars, count);

    processOutput(output, Foobars, count);
    return 0;
}

int processInput(string input, vector<Foobar>* foobars, int* count) {
    ifstream infile; // sourced from https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
    infile.open(input);
    string line;

    
    while (getline(infile, line)) {
        stringstream current(line); 
        std::string word;
        while (current >> word) { // splits the line into two words, type and name
            switch (word) {
                case "Foo":
                    current >> word; // read the name
                    Foo foo(word, 0);
                    foobars->push_back(foo);
                    (*count)++;
                    break;
                case "Bar":
                    current >> word;
                    Bar bar(word, 0);
                    foobars->push_back(bar);
                    (*count)++;
                    break;
                case "Foobar":
                    current >> word;
                    Foobar foobar(word, 0);
                    foobars->push_back(foobar);
                    (*count)++;
                    break;
                default:
                    cout << "Unrecognized word: " << word << "\n";
                    return 1;
            } 
        }
    }

    return 0;
}

int updateStrengths(vector<Foobar>* foobars, int count) {
    for (int i = 0; i < count; i++) {
        foobars->at(i).setStrength(count-i); // count - i because we start from the back of the line
    }
    return 0;
}

int processOutput(string output, vector<Foobar>* foobars, int count) {
    ofstream outfile;
    outfile.open(output);

    for (int i = 0; i < count; i++) {
        outfile << foobars->at(i).name << " " << foobars->at(i).strength << "\n";
    }

    outfile.close();
    return 0;
}