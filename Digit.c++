#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;

    cin >> a;
    int d= int(a);
    if(d>=65 && d<=90)
    {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }
    else if(d>=97 && d<=122)
    {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    else if(d>=48 && d<= 57)
    {
        cout << "IS DIGIT" << endl;
    }
}
