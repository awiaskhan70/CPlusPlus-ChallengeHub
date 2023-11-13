#ifndef NODE_H
#define NODE_H

class Node
{

public:
    Node(int value);
    ~Node();
public:
   int m_data;
   Node * m_next;
};




#endif