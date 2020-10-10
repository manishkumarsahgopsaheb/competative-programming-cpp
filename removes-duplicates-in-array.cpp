#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f[256] = {0};
    cout<<"size of array is: \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    f[arr[i]]++;

    cout<<"array after removing the duplicats:\n";

    for(int i=0;i<n;i++)
    {
        if(f[arr[i]])
        {
            cout<<arr[i]<<" ";
            f[arr[i]]=0;
        }
    }
    return 0;
}