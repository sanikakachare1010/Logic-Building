/* 
   Write a recursive program which accept string from user and count number of characters in  string
*/
#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
        
    }
    
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String :"<<"\n";
    cin>>Arr;

    iRet = Strlen(Arr);

    cout<<"Count of Characters is : "<<iRet;

    return 0;

}
