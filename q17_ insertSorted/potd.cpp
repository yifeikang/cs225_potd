#include "potd.h"
#include <iostream>

using namespace std;

void insertSorted(Node **head, Node *insert) {
  // your code here!
  Node* temp = *head;
  if (*head==NULL) {
    *head = insert;
    return;
  }
  if ((*head)->data_>=insert->data_) {
     insert->next_=*head;
     *head = insert;
     **head = **head;
    return;
  }
  while (temp->data_<insert->data_) {
    Node* next = temp->next_;
    if (next == NULL) {
      temp->next_ = insert;
      return;
    } else if (next->data_>insert->data_) {
      temp->next_=insert;
      insert->next_=next;
      return;
    } else {
      temp=temp->next_;
    }
  }
}
