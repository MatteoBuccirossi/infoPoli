#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(){
            data = 0;
            next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList{
    public:
        Node* head;
        LinkedList(){head = NULL;}

        void insertNode(int);
        void printList();
        void deleteNode(int);
};


void LinkedList::deleteNode(int n){
    Node* temp1 = head, *temp2 = NULL;
    int listLen = 0;
    if(head == NULL){
        cout << "List empty" <<endl;
        return;
    }
    while(temp1 != NULL){
        temp1 = temp1->next;
        listLen++;
    }
    if(listLen < n){
        cout << "index out of range" <<endl;
    }
    if(n == 1){
        head = head->next;
        delete temp1;
        return;
    }

    while(n-- > 1){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;

}

void LinkedList::insertNode(int data){
    Node* newNode = new Node (data);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::printList(){
    Node* temp = head;
    while(temp != NULL){
        cout <<  temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    LinkedList lista;
    int i;
    for(i = 0; i< 5; i++){
        lista.insertNode(i +1);
    }
    lista.printList();
}

