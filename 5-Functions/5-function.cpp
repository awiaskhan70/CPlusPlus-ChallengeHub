#include <iostream>

int calculateSum(int range){
int a=0;
int SUM=0;
for(a ;a<=range;a++)
{
    SUM=SUM+a;
}
return SUM;
}
bool isEven(int number){
if(number%2==0)
    {
    return true;
    }
    return false;
}
int main(){

    for(int a=0 ; a<11; a++)
    {
        if(isEven(a))
        {
            std::cout<<"NUMBER "<< a <<" IS EVEN"<< std::endl;
        }
        else
        {
            std::cout<< "NUMBER "<<a<<" IS ODD"<< std::endl;
        }
    }
std::cout<<"SUM OF NUMBER FROM 1 to 100 : "<<calculateSum(100) << std::endl;
return 0;
}