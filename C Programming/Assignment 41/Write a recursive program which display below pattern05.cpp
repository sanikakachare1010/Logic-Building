/*
    write a recursive program which display below pattern 
      Input : 5
      output : a b c d e
*/
#include<iostream>
using namespace std;
void Display(int iNo)
{
    static int iCnt = 1;
    static char Ch = 'a';

    if(iCnt <= iNo) 
    {
        cout<<Ch<<"\t";
        iCnt++;
        Ch++;
        Display(iNo);
    }

}
int main()
{
    int iValue = 0;

    cout<<"Enter Number:";
    cin>>iValue;

    Display(iValue);

    return 0;

}
