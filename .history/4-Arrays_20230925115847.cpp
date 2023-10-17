#include <iostream>

int main(){
const int arraySize = 5;
int myArray[arraySize];
for (int itr=0; itr<arraySize;itr++)
{
    std::cout<< "Insert array data for location "<<itr<< std::endl;
    std::cin>>myArray[itr];
}
    // Print the elements of the array without a loop
    std::cout << "Array elements: ";
    for (int element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}