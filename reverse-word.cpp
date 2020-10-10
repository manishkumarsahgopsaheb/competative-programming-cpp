#include<bits/stdc++.h>
using namespace std;

string reverse_words(string str)
{
    int len = str.length();
    string result = "";
    int i=len-1;
    int end = i+1;
    int start;

    while(i>=0)
    {
        if(str[i]==' ')
        {
            start = i;
            while(start!=end)
            {
                result = result + str[start++];
            }
            result += ' ';
            end = i;
        }
        i--;
    }

    // for printing the first word of string 
    start=0;
    while (start!=end)
    {
        result = result + str[start++];
    }
    return result;
}

int main()
{
    cout<<"enter your string:\n";
    string str;
    getline(cin, str);

    cout<<reverse_words(str);
    return 0;
}