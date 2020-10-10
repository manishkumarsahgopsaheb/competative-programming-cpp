#include <bits/stdc++.h>
using namespace std;

int main() {
    // creating a array and initialize its all element with 0
	int f[256]={0};
	
	
	string str;
	
    // 	cin>>str;
    // using of getline so that i can take input of whole string including space
    getline(cin, str);
	
	for(int i=0; str[i]; i++)
	{
	   // making each character of str as a index of array f and then incrementing the element value count of f array if 
       //again and again index is found in the string while traversing
	    f[str[i]]++;
	}
	
	for(int i=0; str[i];i++)
	{
	    if(f[str[i]])
	    {
	        cout<<str[i]<<" is "<<f[str[i]]<<" times"<<endl;
	        f[str[i]]=0;
	    }
	}
	
	return 0;
}