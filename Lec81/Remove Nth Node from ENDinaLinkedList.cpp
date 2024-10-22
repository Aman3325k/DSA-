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

// Function to remove the Nth node from the end of the list
Node* removeNthFromEnd(Node* head, int N) {
    Node* fast = head;
    Node* slow = head;

    // Move the fast pointer N steps ahead
    for(int i = 0; i < N; i++) {
        if(fast == NULL) return head;  // If N is greater than the number of nodes
        fast = fast->next;
    }

    // Special case: if we need to remove the head
    if(fast == NULL) {
        Node* temp = head;
        head = head->next;  // Move head to the next node
        delete temp;
        return head;
    }

    // Move both fast and slow pointers until fast reaches the end
    while(fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // Now slow points to the node before the Nth node from the end
    Node* temp = slow->next;
    slow->next = slow->next->next;  // Remove the Nth node
    delete temp;  // Free memory

    return head;
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

    // Remove the 2nd node from the end (4 in this case)
    int N = 2;
    Head = removeNthFromEnd(Head, N);

    cout << "Linked List after removing " << N << "th node from the end: ";
    printLinkedList(Head);

    return 0;
}
