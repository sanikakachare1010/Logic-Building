#include<iostream>
using namespace std;

void Display(int iNo1,int iNo2)
{
    int i = 0;

    if(iNo2<0)
    {
        iNo2 = -iNo2;
    }

    for(i = 1;i <= iNo2;i++)
    {
        cout<<"\t"<<iNo1;
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    cout<<"Enter First numbers :";
    cin>>iValue1;
    cout<<"Enter second number :";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}
