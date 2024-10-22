#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to create a linked list recursively
Node* createlinkedlist(int arr[], int index, int size) {
    if(index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size);

    return temp;
}

// Helper function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) return true;

    // Step 1: Find the middle of the linked list using slow and fast pointers
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the linked list
    Node* secondHalf = reverseList(slow);

    // Step 3: Compare the first half and the reversed second half
    Node* firstHalf = head;
    Node* temp = secondHalf;  // Save the start of the reversed half for restoring later

    bool palindrome = true;
    while (secondHalf != NULL) {
        if (firstHalf->data != secondHalf->data) {
            palindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    // Step 4: Restore the list (optional)
    reverseList(temp);

    return palindrome;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *Head = NULL;

    // Example array to create a linked list that is a palindrome
    int arr[] = {1, 2, 3, 2, 1};

    // Create the linked list from the array
    Head = createlinkedlist(arr, 0, 5);

    cout << "Original Linked List: ";
    printLinkedList(Head);

    // Check if the linked list is a palindrome
    if (isPalindrome(Head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
