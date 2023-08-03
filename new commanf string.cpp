#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please provide text as command line argument" << endl;
        return 1;
    }
    
    string text = argv[1];
    
    int count[26] = {0};
    
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            count[toupper(text[i]) - 'A']++;
        }
    }
    
    cout << "Alphabet\tCount" << endl;
    for (int i = 0; i < 26; i++) {
        cout << (char)('A' + i) << "\t\t" << count[i] << endl;
    }
    
    return 0;
}

