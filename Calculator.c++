#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,sub;
    long long int mul;
    cin >> a >> b;
    sum=a+b;
    mul=(long long int)a*b;
    sub=a-b;

    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mul << endl;
    cout << a << " - " << b << " = " << sub << endl;

    return 0;
}

