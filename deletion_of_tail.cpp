
#include <iostream>
#include<bits/stdc++.h>
#include <vector> 
using namespace std;
//initailize our linked list
class Node{
    public:
      int data;
      Node* next;
      
      Node(int data1,Node* next1){
          data=data1;
          next=next1;
      }
      Node(int data1){
          data=data1;
          next=nullptr;
      }
};
// print our whole linked list
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// convert our arr to linked list
Node* convertArr(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node*mover=head;
    
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
/*
Node* remove_head(Node* head){
    if(head==NULL) return head;
    Node* temp=head;

    head=head->next;

    delete(temp);
    return head;
}*/
// this function is used to remove tail
Node* remove_tail(Node* head){
    // if head is null or head's next element is null
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    //we need to stop before the null came next 
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    // free temp's next element
    delete temp->next;
    // point our temp to nullptr so remove tail
    temp->next=nullptr;
    return head;
}
int main()
{
    vector<int> arr={12,3,32,4};
    Node* head= convertArr(arr);
    
    head= remove_tail(head);
    printLL(head);
    //cout<<head->data;
    
    return 0;
}