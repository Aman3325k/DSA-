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

// Function to rotate the linked list by k positions
Node* rotateLinkedList(Node* head, int k) {
    if (head == NULL || k == 0) return head;

    // Compute the length of the linked list
    Node* current = head;
    int length = 1;  // Start from 1 since we're already at the head
    while (current->next != NULL) {
        current = current->next;
        length++;
    }

    // Connect the last node to the head to make it circular
    current->next = head;

    // Find the new end of the list after rotation
    k = k % length;  // In case k is greater than the length of the list
    int stepsToNewHead = length - k;

    // Traverse to the node just before the new head
    Node* newEnd = head;
    for (int i = 1; i < stepsToNewHead; i++) {
        newEnd = newEnd->next;
    }

    // The new head is the next node
    Node* newHead = newEnd->next;

    // Break the circular link to finalize the rotated list
    newEnd->next = NULL;

    return newHead;
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

    int arr[] = {1, 2, 3, 4, 5};  // Example array

    // Create the linked list from the array
    Head = createlinkedlist(arr, 0, 5);

    cout << "Original Linked List: ";
    printLinkedList(Head);

    // Rotate the linked list by k positions
    int k = 2;  // Example: rotate by 2 positions
    Head = rotateLinkedList(Head, k);

    cout << "Rotated Linked List by " << k << " positions: ";
    printLinkedList(Head);

    return 0;
}
