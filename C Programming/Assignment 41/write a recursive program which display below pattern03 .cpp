/* write a recursive program which display below pattern 
      Input : 5
      output : 5 4 3 2 1
*/
#include<iostream>
using namespace std;
void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo) 
    {
        cout<<iCnt<<"\t";
        iCnt++;
        Display(iNo);
    }

}
int main()
{
    int iValue = 0;

    cout<<"Enter Number:";
    cin>>iValue;

    Display(iValue);

    return 0;

}
