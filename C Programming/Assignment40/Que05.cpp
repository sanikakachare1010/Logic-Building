#include<iostream>
using namespace std;

void Display()
{
    static char cCnt = 'a';

    if(cCnt <= 'f')
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