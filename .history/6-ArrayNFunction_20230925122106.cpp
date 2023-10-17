#include <iostream>
int findMax( int array[], int arraySize)
{
    int max = 0;
for(int itr=0; itr<arraySize; itr++)
{
    if(array[itr]> max)
    {
     max = array[itr];   
    }
}
}
int findMin( int array[], int arraySize)
{
    int min = 0;
for(int itr=0; itr<arraySize; itr++)
{
    if(array[itr]> min)
    {
     min = array[itr];   
    }
}
}
int main(){

    return 0;
}