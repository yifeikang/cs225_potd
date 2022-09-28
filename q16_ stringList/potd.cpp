#include "potd.h"
#include <iostream>
#include <string>
using namespace std;

string stringList(Node *head) {
    // your code here!
    string str;
if (head==NULL) {
    str= "Empty list";
}  else {
    Node* temp=head;
    int i = 0;
    while (temp!=NULL) {
        int data = temp->data_;
        if (i!=0) {
            str += " -> ";
        }
        str += "Node " + to_string(i) + ": "+to_string(data);
        temp=temp->next_;
        i++;
    }
}
return str;
}
