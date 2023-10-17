#include <iostream>

int main(){
int evenSum = 0;
int whileLoopItr = 0;

    for (int loopitr=1 ; loopitr <11; loopitr ++)
    {
        std::cout<<"Number :"<<loopitr<<std::endl;
    }
while (whileLoopItr < 101)
{
    if(whileLoopItr %2 == 0)
    {
     evenSum = evenSum + whileLoopItr;

    }
}
std::cout << "Total sum of even from 1 to 100 = " << evenSum << std::endl;

}