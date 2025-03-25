
#include <iostream>
#include<vector> 
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(Node* prev1,int data1,Node* next1){
        prev=prev;
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
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(prev,arr[i],nullptr);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
Node * Delete_Headof_DoublyLL(Node* head){
    // if head is null or head is single element
    if(head==NULL || head->next==NULL) return head;
    // take node back equal to head
    Node* back=head;
    //take head equal to next element
    head=head->next;
    //make head prev to nullptr
    head->prev=nullptr;
    //make back node next also nullptr so that nothing is connected to head
    back->next=nullptr;
    //delete back which was our head before the operation
    delete back;
    return head;
}

int main()
{
  vector<int> arr={2,45,6,4,21};
  Node* head=convertArr(arr);
  Node* head1=Delete_Headof_DoublyLL(head);
  printDoublyLL(head1);

    return 0;
}