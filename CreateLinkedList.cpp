
#include <iostream>
#include <vector>
using namespace std;
// To create linked list we need to create a class to intialize our Linked list
class Node{
    public:
      int data;
      Node* next;
      // To create a linked list we need our data and next address
      Node(int data1,Node* next1){
          data=data1;
          next=next1;
      }
};
int main()
{
    // creating an array and checking that our constructor is working or not 
    vector<int> arr={12,3,2,3};
    Node* y = new Node(arr[0],nullptr);
    //if we need to print our head data we use 'name'->data and for next addrees we use ->next;
    cout<<y->data;
    //and for next addrees we use ->next;
    cout<<y->next;

    return 0;
}