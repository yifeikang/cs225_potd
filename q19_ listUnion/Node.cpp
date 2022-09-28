#include "Node.h"
#include <iostream>
/** Create a new node and add it to the list, while keeping the list sorted.
*/
Node *insertSorted(Node *first, int data) {
    // your code here
    //std::cout << "to add Node : " << data << std::endl;
    Node * toAdd = new Node();
    toAdd->data_=data;
    toAdd->next_=NULL;
   if (first == NULL || first ->data_ >= data) {
       toAdd->next_ = first;
       first = toAdd;
       return first;
   }
   Node *curr = first;
   while (curr->next_ !=NULL&& curr->data_ < data) {
       curr=curr->next_;
   }
    toAdd->next_=curr->next_;
    curr->next_=toAdd;
//     curr = first;
//     int count = 0;
//     while(curr != NULL) {
//     std::cout << "Node " << std::to_string(count) << ": " << curr ->data_ << std::endl;
//     count++;
//     curr = curr->next_;
//   }
    return first;
}

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {
    Node * out = NULL;
    Node* curr = NULL;
    std::cout<< "# of nodes in out before adding anything: " <<out->getNumNodes()<<std::endl;
    if (first == NULL && second == NULL) {
        return NULL;
    }
    while (first != NULL) {
        curr = first;
        out = insertSorted(out,curr->data_); 
        first = first->next_;
       // curr->~Node();
    }
    std::cout<< "# of nodes in out after adding 1st list: " <<out->getNumNodes()<<std::endl;
    while (second != NULL) {
        curr=second;
        out = insertSorted(out,curr->data_);
        second = second->next_;
       // curr->~Node();
    }
    std::cout<< "# of nodes in out after adding 2nd list: " <<out->getNumNodes()<<std::endl;
//      int count = 0;
//   curr = out;
//   while(curr != NULL) {
//     std::cout << "Node " << std::to_string(count) << ": " << curr ->data_ << std::endl;
//     count++;
//     curr = curr->next_;
//   }
//  std::cout<<"reach line #" << __LINE__<<std::endl;
    curr = out;
    while (curr-> next_!=NULL) {
      //  std::cout<<"reach line #" << __LINE__<<std::endl;
        Node * next = curr->next_;
        if (curr->data_==next->data_) {
            curr->next_ = next->next_;
            next->~Node();
        } else {
            curr = curr->next_;
        }
    }
//    std::cout<<"reach line #" << __LINE__<<std::endl;
//   int count = 0;
//   curr = out;
//   while(curr != NULL) {
//     std::cout << "Node " << std::to_string(count) << ": " << curr ->data_ << std::endl;
//     count++;
//     curr = curr->next_;
//   }
std::cout<< "# of nodes in out: " <<out->getNumNodes()<<std::endl;
    return out;
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
