/*
   Write a recursive program which accept number from user and return largest digit

*/
#include<iostream>
using namespace std;

int Max(int iNo)
{
    static int iMax = 0,iDigit = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
        
       if (iMax < iDigit)
       {
          iMax = iDigit;
              
       }
      iNo = iNo/10;

       Max(iNo);  
    }
 
   return iMax;
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
