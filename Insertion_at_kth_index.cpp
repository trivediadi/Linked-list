
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
// Inserting Element to the Kth index
Node* Inserting_at_Kth_element(Node* head,int val,int index){
    Node* temp=head;
    if(index==1){
        return new Node(val,head);
    }
    int cnt=0;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==index-1){
            Node* x=new Node(val);
            x->next=temp->next;
            temp->next=x;
            return head;
        }
        temp=temp->next;
    }
    return head;
    return head;
    temp->next=new Node(val);
    return head;
}

int main()
{
    vector<int> arr={12,3,2,3};
   Node* head=convertArrtoLL(arr);
   //cout<< head->data<<" ";
   head=Inserting_at_Kth_element(head,162,1);
   print_LL(head);
   
    return 0;
}