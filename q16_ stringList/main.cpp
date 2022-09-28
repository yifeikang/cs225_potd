#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head =NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node * node1 = new Node();
  node1->data_=20;
  node1->next_=NULL;
  cout << stringList(node1) << endl;


  // Test 3: A list with more than one node
  Node* node2 = new Node();;
   node1->data_=20;
  node1->next_=node2;
  // one->data_=1;
  // head->next_ = one;
   cout << stringList(node1) << endl;

  return 0;
}
