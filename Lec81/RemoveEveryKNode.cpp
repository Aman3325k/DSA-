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

// Function to remove every K-th node
Node* removeEveryKthNode(Node* head, int K) {
    if (head == NULL || K == 0) return head;

    Node* current = head;
    Node* prev = NULL;
    int count = 1;  // Start with the first node

    while (current != NULL) {
        // If count is a multiple of K, remove the current node
        if (count % K == 0) {
            if (prev != NULL) {
                // Skip the current node
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                // If we are at the head (K == 1), remove the head node
                Node* temp = head;
                head = head->next;
                delete temp;
                current = head;
            }
        } else {
            // Otherwise, just move to the next node
            prev = current;
            current = current->next;
        }
        count++;
    }

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

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  // Example array

    // Create the linked list from the array
    Head = createlinkedlist(arr, 0, 9);

    cout << "Original Linked List: ";
    printLinkedList(Head);

    // Remove every 3rd node
    int K = 3;
    Head = removeEveryKthNode(Head, K);

    cout << "Linked List after removing every " << K << "rd node: ";
    printLinkedList(Head);

    return 0;
}
