/*
    Write a recursive program which accept string from user and count white spaces.

*/
#include<iostream>
using namespace std;

int WhiteSpaces(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
            
        }
         str++;
         WhiteSpaces(str);
         
       
    }
    return iCount;
}
int main()
{
   char Arr[50];
   int iRet = 0;

   cout<<"Enter String : "<<"\n";
   cin.getline(Arr,50);

   iRet = WhiteSpaces(Arr);

   cout<<"Count of whitespaces is :"<<iRet;

   return 0;
}
