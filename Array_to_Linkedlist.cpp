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
    // head is the first data of the linked list 
    // head should not be tempored
    Node* head=new Node(a[0]);
    //mover is the node which link our next el to head 
    Node* mover=head;
    for(int i=0;i<a.size();i++){
        // taking temp node 
        Node*temp= new Node(a[i]);
        // using temp to connect to mover 
        //mover's next pointing towards temp data
        mover->next=temp;
        // we need to move our mover to next element
        mover=mover->next;
    }
    // At last we return our head which connected to his next element
    return head;
}
int main()
{
    vector<int> arr={12,3,2,3};
   Node* head=convertArrtoLL(arr);
   cout<< head->data;

    return 0;
}