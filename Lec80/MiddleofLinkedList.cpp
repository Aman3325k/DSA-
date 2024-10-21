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

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    // Move 'fast' by two steps and 'slow' by one step
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;        // Moves one step
        fast = fast->next->next;  // Moves two steps
    }

    return slow;  // 'slow' will be at the middle when 'fast' reaches the end
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

    // Find the middle node of the linked list
    Node* middle = findMiddle(Head);

    if (middle != NULL)
        cout << "Middle Node: " << middle->data << endl;
    else
        cout << "The list is empty!" << endl;

    return 0;
}
