/*
   Write a recursive program which accept number from user and return its factorial
   
*/
#include<iostream>
using namespace std;

int Fact(int iNo)
{
     static int iFact = 1;
     
    if(iNo > 0)
    {
       iFact = iFact *iNo;
       iNo--;
       
       Fact(iNo);
        
        
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"Factorial is : "<<iRet;

    return 0;

}
