
#include <iostream>
#include<vector> 
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(Node* prev1,int data1,Node* next1){
        prev=prev1;
        data=data1;
        next=next1;
    }
    Node(int data1){
        prev=nullptr;
        data=data1;
        next=nullptr;
    }
};
void printDoublyLL(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* convertArr(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* tail=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(tail,arr[i],nullptr);
        tail->next=temp;
        tail=tail->next;
    }
    return head;
}
Node* Delete_Tailof_DoublyLL(Node* head){
    // take tail node equal to head for travasal
    Node* tail=head;
    //move upto last element
    while(tail->next !=NULL){
        tail=tail->next;
    }
    // take pre as element before last element
    Node* pre=tail->prev;
    // make pre-next equal to nullptr to disconnect linked list
    pre->next=nullptr;
    // make tail prev equal to nullptr this will completely disconnect tail from linked list
    tail->prev=nullptr;
    delete tail;
    return head;
    
}
int main()
{
  vector<int> arr={2,45,6,4,21};
  Node* head=convertArr(arr);
  Node* head1=Delete_Tailof_DoublyLL(head);
  printDoublyLL(head1);

    return 0;
}