
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
// Inserting Element to the head
Node* Insert_to_head(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}

int main()
{
    vector<int> arr={12,3,2,3};
   Node* head=convertArrtoLL(arr);
   cout<< head->data<<" ";
   head=Insert_to_head(head,2);
   cout<<head->data;
    return 0;
}