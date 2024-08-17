#include <iostream>
#include <vector>
using namespace std;

bool checkifpangram(string sentence) {
    vector<bool> alpha(26, false);

    for (int i = 0; i < sentence.size(); i++) {
        if ('a' <= sentence[i] && sentence[i] <= 'z') {
            alpha[sentence[i] - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!alpha[i])
            return false;
    }

    return true;
}

int main() {
    string inputSentence = "We promptly judged antique ivory buckles for the next prize";

    if (checkifpangram(inputSentence))
        cout << "Yes, the sentence is a pangram." << endl;
    else
        cout << "No, the sentence is not a pangram." << endl;

    return 0;
}
