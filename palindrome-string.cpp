#include<bits/stdc++.h>
using namespace std;

bool palindrome(char str[], int len)
{
    int i;
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        return false;
    }
    if(i==len/2)
    return true;
}

int main()
{

    cout<<"enter your string:\n";
    char str[100];
    cin>>str;
    int len = strlen(str);

    if(palindrome(str, len))
    {
        cout<<"string is palindrome";
    }
    else
    {
        cout<<"string is not palindrome";
    }
    return 0;
}