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

 Node *createlinkedlist(int arr[], int index, int size,Node *prev) {
    // Base case
    if(index == size)
    {
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp->next = prev;

    createlinkedlist(arr,index+1,size,temp);
}

int main() {
    Node *Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    Head = createlinkedlist(arr,0,5,Head);

    // Print the values
    Node *temp = Head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
