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

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's pointer
        prev = current;        // Move the previous pointer ahead
        current = next;        // Move the current pointer ahead
    }

    return prev;  // New head of the reversed linked list
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

    int arr[] = {2, 4, 6, 8, 10};

    // Create the linked list from the array
    Head = createlinkedlist(arr, 0, 5);

    cout << "Original Linked List: ";
    printLinkedList(Head);

    // Reverse the linked list
    Head = reverseLinkedList(Head);

    cout << "Reversed Linked List: ";
    printLinkedList(Head);

    return 0;
}
