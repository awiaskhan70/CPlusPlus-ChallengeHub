#include <iostream>
int main(){

int inputVariable;
std::cout <<"Enter the value";
std::cin>>inputVariable;
if(inputVariable%2 == 0)
{
    std::cout<<"Input is Even";
}
else
std::cout<<"Input is odd";
return 0;
}