/*
   Write a recursive program which accept number from user and return its product of digits
*/
#include<iostream>
using namespace std;

int Mult(int iNo)
{
     static int iMul = 1;
     
    if(iNo > 0)
    {
    
       iMul = iMul *(iNo % 10);
       iNo = iNo /10;
       
       Mult(iNo);
        
        
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = Mult(iValue);

    cout<<"Multiplicaation of digits is : "<<iRet;

    return 0;

}
