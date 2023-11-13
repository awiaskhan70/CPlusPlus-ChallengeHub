#include "linklist.h"

Linklist::Linklist(/* args */) : head(nullptr)
{
}



void Linklist::insertAtBegin(int value)
{
    Node *newNode = new Node(value);
    newNode->m_next = head;
    head = newNode;
}

void Linklist::insettAtEnd(int value)
{
    Node *newNode = new Node(value);
    if(head == nullptr)
    {
        head = newNode;
    }
    else {
        Node * current = head;
        while (current->m_next)
        {
            current = current->m_next;
        }
        current->m_next = newNode;
    }
}

void Linklist::displayAll()
{
    Node * current = head;

    while (current)
    {
        std::cout<<"Node data : "<<current->m_data << std::endl;
        current = current->m_next;
    }
    
}

void Linklist::insertAtPosition(int val, int position)
{
    Node * newNode = new Node(val);
   
    if(position == 0)
    {

newNode->m_next = head;
head = newNode;
return;
    }
     Node * current = head;
     int index =0;
     for (index =0; index < position -1; index ++)
     {
        if(current != nullptr)
        {
            current = current->m_next;
        }
        else{
            std::cout<<"index out of range"<<std::endl;
            delete newNode;
            return;
        }
     }
     newNode->m_next =current->m_next;
     current->m_next = newNode;


}

bool Linklist::deleteNode(int value)
{
    if(head == nullptr)
    {
        std::cout<<"List is empty"<<std::endl;
        return false;
    }
    if(head->m_data == value)
    {
        delete head;
        return true;
    }
    Node * current = head;
    while (current->m_next != nullptr)
    {
        if(current->m_next->m_data == value)
        {
            Node * temp = current->m_next;
            current->m_next = current->m_next->m_next;
            delete temp;
            return true;
        }
        current = current->m_next;
    }
    std::cout<<"Node not avaialble in the list"<<std::endl;
    return false;
    
}

int Linklist::findMiddle()
{
    Node * slow = head;
    Node * fast = head;
    while (fast && fast->m_next)
    {
        slow = slow->m_next;
        fast = fast->m_next->m_next;
    }
    
    return slow->m_data;
}

Linklist Linklist::split()
{
    Linklist secondHalf;
    if(!head || head->m_next)
    {
        return secondHalf;
    }
    Node * slow;
    Node * fast;
    Node * prev =nullptr;
    while(fast && fast->m_next)
    {
        prev = slow;
        slow = slow->m_next;
        fast = fast->m_next->m_next;

    }
    if(prev)
    {
        prev->m_next = nullptr;
    }
    secondHalf.head = slow;

    return secondHalf;
}

void Linklist::reverse()
{
    Node * prevNode = nullptr;
    Node * currentNode = head;
    Node * nextNode = nullptr;
    while (currentNode != nullptr)
    {
        //store next node in sequence 
        nextNode = currentNode->m_next;

        //Reverse the direction of current node's next pointer

        currentNode->m_next = prevNode;

        //Move prevNode and currentNode one step forrword

        prevNode= currentNode;
        currentNode = nextNode;
    }
    //update head to point the new first node

    head = prevNode;

}
Linklist::~Linklist()
{
}