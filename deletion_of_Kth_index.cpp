
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
// To delete Kth index element in linked list

Node* remove_Kth_element(Node* head,int k){
      if(head==NULL || head->next==NULL ) return NULL;
      // if the 1st index ,we need to remove
      if(k==1){ 
          Node* temp=head;
          head=head->next;
          delete temp;
          return head;
      }
      // we need counter to get the index
      int cnt=0;
      // need prev pointer to remember the prev element
      Node* prev=nullptr;
      Node* temp=head;
      while(temp!=NULL){
          cnt++;
          if(cnt==k){
              // we want our prev to connect it to next of the next element
              prev->next=prev->next->next;
              break;
          }
          prev=temp;
          temp=temp->next;
      }
      return head;
}
      

int main()
{
    vector<int> arr={12,3,32,4};
    Node* head= convertArr(arr);
    
    head= remove_Kth_element(head,4);
    printLL(head);
    //cout<<head->data;
    
    return 0;
}