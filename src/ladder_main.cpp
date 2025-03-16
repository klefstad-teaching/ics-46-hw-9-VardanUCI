#include "ladder.h"
#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    set<string> word_l; string startW; string goalword;
    load_words(word_l, "src/words.txt");
    cout << "Inpute word 1: ";
    getline(cin, startW);
    cout << "Inpute word last: ";
    getline(cin, goalword);
    for (size_t i = 0; i < startW.length(); i++) { startW[i] = tolower(startW[i]); }
    for (size_t k = 0; k < goalword.length(); k++) { goalword[k] = tolower(goalword[k]); }
    vector<string> stepchain = generate_word_ladder(startW, goalword, word_l);
    if (startW == goalword) {
        cout << "There is a error b/c " << startW << " and " << goalword << " is same" << endl;
        return 0;}
    if (stepchain.empty()) {
    cout << "No word ladder found.\n";}  else {
    print_word_ladder(stepchain);
}

    verify_word_ladder();
    return 0;
}