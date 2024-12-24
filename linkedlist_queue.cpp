// to be completed

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(){next = NULL;};
};

class Queue1{
public:
    Node head;
    int enque(){
        Node* node = new Node();
        cout << "input data: " << endl;
        cin >> node -> data;

        if(head.next == NULL){
            head.next = node;
            return;
        }
        node -> next = head.next;
        head.next = node;

        return 0;
    }

    int deque(){
        Node* prev, *current;
        prev = &head;
        current = head.next;

        if(head.next == NULL){
            cout << "empty" << endl;
            return;
        }
        while(current -> next != NULL){
            prev = current;
            current = current -> next;
        }
        cout << "delete: " << current -> data << endl;

        prev -> next = NULL;
        delete current;
        return 0;
    }
};

int main(){

    Queue1 queue1;

    queue1.enque();
    queue1.enque();
    queue1.enque();
    queue1.enque();
    queue1.enque();

    queue1.deque();
    queue1.deque();
    queue1.deque();
    queue1.deque();
    queue1.deque();

    return 0;
}