#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        // lets find the array sum

        int total = 0;
        for(int i=0;i<n;i++)
        {
            total  += arr[i];
        }

        // lets find the sum of n natural numbers
        int sum=0;
        for(int i=1;i<=n+1;i++)
        sum += i;

        // so lets find the missing array number
        int miss;
        miss = sum-total;
        cout<<miss;

        return 0; 
    }
}