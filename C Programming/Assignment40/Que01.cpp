#include<iostream>
using namespace std;
void Display()
{
   static int iCnt = 1;

    if(iCnt <= 4)
    {
        cout<<"*\t";
        iCnt++;
        Display();

    }
}
int main()
{
    Display();
    return 0;

}
