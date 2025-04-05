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
 Node* convertArrtoLL(vector<int> &a){
  
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=0;i<a.size();i++){
        Node*temp= new Node(a[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
 Node* Tortoise_hare_middleNode(Node* head){
     //Tortoise and hare algo is used in Linked List 
     // This algo can help us to detect loop or help to find out the middle Node
     // In this algo we take Two pointer slow and fast or Tortoise and hare
     //slow will move one step where on other hand fast will move two step
     Node* slow=head;
     Node* fast=head;
     while(fast!=NULL && fast->next!=NULL){
         slow=slow->next; // the slow is moving one step 
         fast=fast->next->next; // fast is moving two step 
     }
     /*slow will stop at middle node because if fast travel 2d distance then slow will move d 
        where d is middle of 2d */
     return slow;
 }
int main()
{
    vector<int> arr={12,3,2,3,5,23,54};
   Node* head=convertArrtoLL(arr);
   Node* middle=Tortoise_hare_middleNode(head);
   cout<<middle->data;
   return 0;

}