/*
    Write a recursive program which accept string from user and count number of small characters.
*/
#include<iostream>
using namespace std;

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
 
   return iCount;
}

int main()
{
   char Arr[20];
   int iRet = 0;

   cout<<"Enter string :"<<"\n";
   cin>>Arr;

   iRet = Small(Arr);

   cout<<"Count of small character is :"<<iRet;

   return 0;
}
