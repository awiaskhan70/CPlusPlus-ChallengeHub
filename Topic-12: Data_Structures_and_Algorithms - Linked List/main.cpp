#include "linklist.h"

int main(){
Linklist mylist;
mylist.insertAtBegin(1);
mylist.insertAtBegin(2);
mylist.insertAtBegin(3);
// mylist.insertAtBegin(4);
// mylist.insertAtBegin(5);

// std::cout <<"Linked List:";
mylist.displayAll();
std::cout <<"==========================="<<std::endl;
mylist.insertAtPosition(6,1);
// mylist.insertAtPosition(7,3);
// mylist.insertAtPosition(8,4);
mylist.displayAll();
std::cout <<"==========================="<<std::endl;
std::cout<<"Find middle : "<<mylist.findMiddle()<<std::endl;
std::cout <<"==========================="<<std::endl;
mylist.reverse();
mylist.displayAll();
return 0;
}