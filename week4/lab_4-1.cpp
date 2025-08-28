#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    char b = ' ';

    cout << "(1)" << endl;
    for (i = 1; i <= 5; i++) // outer loop - 아우터 반복문
    {
        for (j = 1; j <= i; j++) // inner loop - 이너 반복문
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl; // 중첩반복문

    cout << "(2)" << endl;
    for (i = 5; i >= 1; i--) 
    {
        for(j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout<<endl;
    }
    cout<<endl;

    cout << "(3)" << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    cout << "(4)" << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            cout<<b;
        }
        for (k = i; k > 0; k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
    cout<<endl;


    cout << "(5)" << endl;
    for (i=5; i>=1; i--)
    {
        for(j=1; j<=5-i; j++)
        {
            cout<<b;
        }
        for(k=1; k<=i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout << "(6)" << endl;
    for (i=5; i>=1; i--)
    {
        for (j=1; j<=5-i; j++)
        {
            cout<<b;
        }
        for (k=i; k>=1; k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
