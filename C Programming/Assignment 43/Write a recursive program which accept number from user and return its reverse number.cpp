/*
   Write a recursive program which accept number from user and return its reverse number

*/
#include<iostream>
using namespace std;

int Max(int iNo)
{
    static int iRev = 0,iDigit = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
       iRev = iRev * 10 + iDigit;
      iNo = iNo/10;

       Max(iNo);  
    }
 
   return iRev;
}

int main()
{
   int iValue = 0 ,iRet = 0;

   cout<<"Enter number :"<<"\n";
   cin>>iValue;

   iRet = Max(iValue);

   cout<<"Maximum  Value is :"<<iRet;

   return 0;
}
