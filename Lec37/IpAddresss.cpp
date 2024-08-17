#include <iostream>
using namespace std;

int main() {
    string address; // Define and initialize the 'address' variable
    cin >> address; // Read the input address

    string ans;
    int index = 0;

    while (index < address.size()) {
        if (address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];

        index++;
    }

    cout << ans; // Print the modified address
    return 0;    // Return 0 to indicate successful execution
}
