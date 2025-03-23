/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
int main()
{
    vector<int> arr={12,3,2,3};
   Node* head=convertArrtoLL(arr);
   Node* temp=head->next;
   // taking while loop until temp !=NULL 
   
   while(temp){
       // this will print our linked list 
       cout<<temp->data<< " "; 
       // tranversing inside the linked list
       temp=temp->next; 
   }

    return 0;
}