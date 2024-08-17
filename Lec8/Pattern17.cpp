#include <iostream>

int main() {
    int n = 3;

    for (int i = 1; i <= n; ++i) {
        // Print spaces before numbers
        for (int j = n; j > i; --j) {
            std::cout << "  ";
        }

        // Print numbers in decreasing order
        for (int k = i; k >= 1; --k) {
            std::cout << k << " ";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
// understand it later