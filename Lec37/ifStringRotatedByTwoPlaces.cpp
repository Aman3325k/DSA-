#include <iostream>
using namespace std;

// Function to rotate a string anticlockwise by two places
void rotateanticlockwise(string &s) {
    char c = s[0];
    int index = 1;

    while (index < s.size()) {
        s[index - 1] = s[index]; // Corrected assignment
        index++;
    }
    s[s.size() - 1] = c;
}

// Function to rotate a string clockwise by two places
void rotateclockwise(string &s) {
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0) {
        s[index + 1] = s[index]; // Corrected assignment
        index--;
    }
    s[0] = c;
}

// Function to check if str2 is a rotated version of str1
bool isRotated(string str1, string str2) {
    if (str1.size() != str2.size())
        return false;

    string clockwise = str1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if (clockwise == str2)
        return true;

    string anticlockwise = str1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if (anticlockwise == str2)
        return true;

    return false;
}

int main() {
    string str1 = "hello";
    string str2 = "lohel";

    if (isRotated(str1, str2))
        cout << "Yes, str2 is a rotated version of str1." << endl;
    else
        cout << "No, str2 is not a rotated version of str1." << endl;

    return 0;
}
