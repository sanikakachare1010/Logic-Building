#include<iostream>
using namespace std;

void Display(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;   // update value negative to positive 
    }

    while (iValue > 0)
    {
        cout<<"* ";
        iValue--;
    }
    
}
int main()
{
    int iNo = 0;

    cout<<"Enter the number :";
    cin>>iNo;

    Display(iNo);

}
