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

// Recursive function to reverse the nodes of a linked list
Node* reverseNodesRecursively(Node* head) {
    // Base case: if the list is empty or has one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursively reverse the rest of the list
    Node* newHead = reverseNodesRecursively(head->next);

    // Change the next pointer of the current node's next node to point back to the current node
    head->next->next = head;

    // Set the current node's next to NULL (it becomes the tail of the reversed list)
    head->next = NULL;

    return newHead;  // Return the new head of the reversed list
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

    // Reverse the linked list using recursion
    Head = reverseNodesRecursively(Head);

    cout << "Reversed Linked List: ";
    printLinkedList(Head);

    return 0;
}
