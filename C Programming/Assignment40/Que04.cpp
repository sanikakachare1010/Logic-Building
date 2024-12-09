#include<iostream>
using namespace std;

void Display()
{
    static char cCnt = 'A';

    if(cCnt <= 'F')
    {
        cout<<cCnt<<"\t";
        cCnt++;
        Display();
    }
}
int main()
{
    Display();

    return 0;
}