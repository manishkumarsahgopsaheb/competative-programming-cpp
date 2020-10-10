#include<bits/stdc++.h>
#define out 0
#define in 1
using namespace std;

int words_count(string str)
{
    int wc=0;
    int i=0;
    int state = out;

    while (str[i])
    {
        if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
        {
            state = out;
        }
        else if(state == out)
        {
            state = in;
            wc++;
        }
        i++;
    }
    return wc;
}

int main()
{
    string str;
    getline(cin, str);

    cout<<words_count(str);
    return 0;
}