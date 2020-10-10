#include<bits/stdc++.h>
using namespace std;

// take the string as an input and print the count of vowels if any vowels is present in the string

void vowel_count(string str)
{
    int f[256] = {0};

    for(int i=0;str[i];i++)
    f[str[i]]++;

    for(int i=0;str[i];i++)
    {
        if(f[str[i]])
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                cout<<str[i]<<" is "<<f[str[i]]<<" times"<<endl;
            }
            f[str[i]]=0;
        }
    }
}


int main()
{
    string str;
    getline(cin, str);
    // instead of declaring string as an input you can also take the character array like
    // char str[100];
    // cin>>str;
    vowel_count(str);
}