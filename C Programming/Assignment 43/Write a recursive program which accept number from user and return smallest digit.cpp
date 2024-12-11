/*
   Write a recursive program which accept number from user and return smallest digit

*/
#include<iostream>
using namespace std;

int Min(int iNo)
{
    static int iMin = 1,iDigit = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
        
       if (iMin > iDigit)
       {
          iMin = iDigit;
              
       }
      iNo = iNo/10;

       Min(iNo);  
    }
 
   return iMin;
}

int main()
{
   int iValue = 0 ,iRet = 0;

   cout<<"Enter number :"<<"\n";
   cin>>iValue;

   iRet = Min(iValue);

   cout<<"Maximum  Value is :"<<iRet;

   return 0;
}
