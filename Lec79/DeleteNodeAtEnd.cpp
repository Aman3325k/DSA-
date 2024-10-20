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

Node* createlinkedlist(int arr[], int index, int size) {
    // Base case
    if(index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size);

    return temp;
}

int main() {
    Node *Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    Head = createlinkedlist(arr, 0, 5);

    // Delete a node at end 
    if(Head!=NULL)
    {
    // only one node is present 
    if(Head->next==NULL)
    {
        Node *temp = Head;
        delete temp;
        Head = NULL;
    }

    //More than 1 node is present
    else
    {
        Node *curr = Head;
        Node *prev = NULL;

        //curr->next is not NULL

        while(curr->next!=NULL)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

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
