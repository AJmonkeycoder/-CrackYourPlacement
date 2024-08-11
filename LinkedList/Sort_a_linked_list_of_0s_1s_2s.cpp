#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){
        data=0;
        next=NULL;
    }

    Node(int d){
        data= d;
        next=NULL;
    }
};

void sortList(Node* head){
    int arr[3]={0};
    Node* tail=head;

    while(tail!=NULL){
        if(tail->data==0) arr[0]++;
        else if(tail->data==1) arr[1]++;
        else arr[2]++;

        tail= tail->next;
    }
    tail=head;
    for(int i=0; i<arr[0]; i++){
        tail->data =0;
        tail=tail->next;
    }
    for(int i=0; i<arr[1]; i++){
        tail->data =1;
        tail=tail->next;
    }
    for(int i=0; i<arr[2]; i++){
        tail->data =2;
        tail=tail->next;
    }
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
      cout << "\n";
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);

    cout << "Linked List before Sorting:";
    printList(head);

     
    sortList(head);

    cout << "Linked List after Sorting:";
    printList(head);

    return 0;
}