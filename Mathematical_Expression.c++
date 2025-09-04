
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b;


    if(s=='+')
    {
        int sum=a+b;
        cin >> q >> c ;
        if(sum==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    else if(s=='-')
    {
        int sub=a-b;
        cin >> q >> c;

        if(sub==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sub << endl;
        }
    }
    else if(s=='*')
    {
        long long int mul=a*b;
        cin >> q >> c;
        if(mul==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << mul << endl;
        }
    }


    return 0;
}

