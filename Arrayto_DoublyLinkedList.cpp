
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
// this function will convert arr to Doubly LL
Node* convertArr(vector<int> arr){
    Node* head=new Node(arr[0]);
    // we need prev pointer to remember back element
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(prev,arr[i],nullptr);
        //previous is head and next will be temp;
        prev->next=temp;
        //now we can shift our previous to next element
        prev=prev->next;
    }
    return head;
}
int main()
{
  vector<int> arr={2,45,6,4,21};
  Node* head=convertArr(arr);
  printDoublyLL(head);

    return 0;
}