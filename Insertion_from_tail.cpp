
#include <iostream>
#include <vector>
using namespace std;
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
Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
void print_LL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
// Inserting Element to the tail
Node* Inserting_to_tail(Node* head,int val){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}

int main()
{
    vector<int> arr={12,3,2,3};
   Node* head=convertArrtoLL(arr);
   //cout<< head->data<<" ";
   head=Inserting_to_tail(head,2);
   print_LL(head);
   
    return 0;
}