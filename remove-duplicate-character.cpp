#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f[256] = {0};

    string str;
    getline(cin, str);

    for(int i=0;str[i];i++)
    {
        f[str[i]]++;
    }

    for(int i=0;str[i];i++)
    {
        if(f[str[i]])
        {
            // here i wil not print the count only i will print he index name which is unique
            cout<<str[i];
            f[str[i]]=0;
        }
        
    }
return 0;
}