#include <iostream>

int main(){
const int arraySize = 5;
int myArray[arraySize];
for (int itr=0; itr<arraySize;itr++)
{
    std::cout<< "Insert array data for location "<<itr<< std::endl;
    std::cin>>myArray[itr];
}
std::cout<<myArray<<std::endl;
}