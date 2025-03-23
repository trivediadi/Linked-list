
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
// To delete head of linked list we have to use this function
Node* remove_head(Node* head){
    // if head is null
    if(head==NULL) return head;
    // head is saved in temp
    Node* temp=head;
    // moving our head to next element
    head=head->next;
    // now delete our saved head in the temp
    delete(temp);
    return head;
}
int main()
{
    vector<int> arr={12,3,32,4};
    Node* head= convertArr(arr);
    
    head= remove_head(head);
    printLL(head);
    cout<<head->data;
    
    return 0;
}