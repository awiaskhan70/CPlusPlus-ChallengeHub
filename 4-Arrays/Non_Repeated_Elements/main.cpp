#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findNonRepeatedElements(const std::vector<int>& nums){
    std::unordered_map<int,int> countMap; //To store the count of each element
    std::vector<int> firstAppearance; //To store the first apperance of the element

// count each element in array
    for (int num : nums) // range based loop for traditional loop use this for(auto i = 0; i < nums.size(); i++)
    {
        if (countMap.count(num)==0){
            firstAppearance.push_back(num); // record first apperance
        }
        countMap[num]++;
    }
    std::vector<int> result;
    //collect elements that appear exactly once
    for(int num : firstAppearance){
        if(countMap[num]==1){
            result.push_back(num);
        }
    }
    return result;
}
int main(){
    std::vector<int> input = {4,3,9,4,3,9,5,5,2,8,6};
    std::vector<int> nonRepeated = findNonRepeatedElements(input);
    std::cout <<"Non-repeated elements: ";
    for(int num: nonRepeated)
    {
        std::cout <<num<< " ";
    }
    std::cout<< std::endl;

    return 0;

}
/*
Here's how each element of the array is processed:
Element = 4
countMap.count(4) == 0 → True (4 is not yet a key in countMap).
firstAppearance.push_back(4); → firstAppearance = {4}.
countMap[4]++; → countMap = {4:1}.
Element = 3
countMap.count(3) == 0 → True (3 is not yet in countMap).
firstAppearance.push_back(3); → firstAppearance = {4, 3}.
countMap[3]++; → countMap = {4:1, 3:1}.
Element = 9
countMap.count(9) == 0 → True (9 is not yet in countMap).
firstAppearance.push_back(9); → firstAppearance = {4, 3, 9}.
countMap[9]++; → countMap = {4:1, 3:1, 9:1}.
Element = 4 (again)
countMap.count(4) == 0 → False (4 is already in countMap).
countMap[4]++; → countMap = {4:2, 3:1, 9:1}.
*/
/*
#include <iostream>
int * findNonRepeatedElements(const int* array, int size, int& resultSize){
//Assume input number range is 0-99
    const int MAX_VALUE= 100;
    int counts[MAX_VALUE]={0};
    //count each element 

    for(int i=0; i<size ; ++i){
        int num= array[i];
        if(num < 0 || num>= MAX_VALUE)
        {
            std::cout<< "Number out of range"<<std::endl;
        return nullptr;
        }
        counts[num]++;
    }
    //determine the size of unique elements
    int numUnique=0;
    for (int num=0; num < MAX_VALUE; ++num){

        if(counts[num]==1)
        {
            numUnique++;
        }
    }
    //allocate exact size needed
    int *result = new int[numUnique];
    resultSize = 0;
    //fill the result array
    for(int num = 0 ; num < MAX_VALUE; ++num){
        if(counts[num]==1)
        {
            result[resultSize++]=num;
        }
    }

    return result;
}

int main(){
int input[] = {4,3,9,4,3,9,5,5,2,8,6};
int size = sizeof(input)/sizeof(input[0]);
int resultSize;

int * result = findNonRepeatedElements(input, size, resultSize);
std::cout<< "Non Repeated elements ";
for (int i=0; i<resultSize; ++i)
{
    std::cout<< result[i] << " ";
}
std::cout << std::endl;
delete[] result;
return 0;
}
*/