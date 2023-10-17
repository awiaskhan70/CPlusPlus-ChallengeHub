#include <iostream>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include <climits> // for INT_MAX
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
return max;
}
int findMin( int array[], int arraySize)
{
    int min = INT_MAX;
for(int itr=0; itr<arraySize; itr++)
{
    if(array[itr]< min)
    {
     min = array[itr];   
    }
}
return min;
}
int main(){

const int arraySize = 10;
int myArray[arraySize];
srand(time(nullptr));

for(int itr =0; itr<arraySize;itr++)
{
    myArray[itr]= rand()%100;
}

int maxVal = findMax(myArray,arraySize);
int minVal = findMin(myArray,arraySize);
std::cout <<"MAX VALUE OF ARRAY "<<maxVal <<std::endl;
std::cout <<"MIN VALUE OF ARRAY "<<minVal <<std::endl;
    return 0;
}