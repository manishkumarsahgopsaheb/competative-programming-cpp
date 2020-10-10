#include<bits/stdc++.h>
using namespace std;

void permute_str(string str, int s, int e)
{
    if(s==e)
    {
        cout<<str<<" ";
    }
    else
    {
        for(int i=s;i<=e;i++)
        {
            swap(str[s], str[i]);
            permute_str(str, s+1, e);
            swap(str[s], str[i]);
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str; // i have to take one word as input thats why i am using cin
        int n;
        n = str.size();
        permute_str(str, 0, n-1);
        return 0;
    }
    
}