#include<iostream>
#include<algorithm> // Include algorithm library for swap function
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    // Insertion Sort
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // Add spacing between elements
    
    return 0;
}
