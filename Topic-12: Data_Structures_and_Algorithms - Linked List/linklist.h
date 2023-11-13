#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
#include "node.h"

class Linklist
{
private:
   Node *head;
public:
    Linklist(/* args */);
    ~Linklist();
    void insertAtBegin(int value);
    void insettAtEnd(int value);
    void insertAtPosition(int val, int position);
    bool deleteNode(int value);
    int findMiddle();
    void displayAll();
    Linklist split();
    void reverse();

};




#endif