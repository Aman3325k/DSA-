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

int main() {
    Node *Head, *Tail;
    Tail = Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    // Insert the value at end
    for(int i = 0; i < 5; i++) {
        // If the linked list is empty
        if(Head == NULL) {
            Head = new Node(arr[i]);
            Tail = Head;  // Head and Tail point to the same first node
        }
        // If the linked list is not empty
        else {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;  // Move Tail to the new last node
        }
    }

    // Print the values
    Node *temp = Head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
