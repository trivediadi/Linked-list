
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
Node* Delete_KthElemnt_DoublyLL(Node* head,int k){
    // for edge cases
    if(head==NULL || head->next==NULL) return NULL;
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        // we need to traverse upto temp
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    // taking pre node to save temp->previous and same for front 
    Node* pre=temp->prev;
    Node* front=temp->next;
    //disconnecting temp from linked list
    temp->prev=nullptr;
    temp->next=nullptr;
    //connecting pre to front
    pre->next=front;
    front->prev=pre;
    delete temp;
    return head;
    
}
int main()
{
  vector<int> arr={2,45,6,4,21};
  Node* head=convertArr(arr);
  Node* head1=Delete_KthElemnt_DoublyLL(head,3);
  printDoublyLL(head1);

    return 0;
}