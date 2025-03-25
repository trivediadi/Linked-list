
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
Node* Insertion_from_KthELement(Node*head,int val,int k){
    Node* temp=head;
   int cnt=0;
   while(temp!=NULL){
       cnt++;
       if(cnt==k){
           break;
       }
       temp=temp->next;
   }
   Node* el=new Node(val);
   Node* pre=temp->prev;
   el->prev=pre;
   pre->next=el;
   el->next=temp;
   temp->prev=el;
   return head;
}
int main()
{
  vector<int> arr={2,45};
  Node* head=convertArr(arr);
  Node* head1=Insertion_from_KthELement(head,21,2);
  printDoublyLL(head1);

    return 0;
}