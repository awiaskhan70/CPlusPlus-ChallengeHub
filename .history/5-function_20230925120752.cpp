#include <iostream>

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

return 0;
}