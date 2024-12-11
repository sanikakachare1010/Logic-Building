/*
  Write a recursive program which accept number from user and return summation of its digits
*/
#include<iostream>
using namespace std;

int Sum(int iNo)
{
     static int iSum = 0;
     static int iDigit = 0;
    if(iNo != 0)
    {
       iDigit = iNo % 10;
       iSum = iSum + iDigit;
       iNo = iNo /10; 
        Sum(iNo);
        
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"Summation of digits is : "<<iRet;

    return 0;

}
