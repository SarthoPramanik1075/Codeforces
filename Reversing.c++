#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
   
    for(int i=0;i<n;i++)
    {
       
        cin >> v[i];
        
    }
    
    vector<int>v1;

    for(int i=n-1;i>=0;i--)
    {
        v1.push_back(v[i]);
    }

    for(int val:v1)
    {
        cout << val << " ";
    }
return 0;
}