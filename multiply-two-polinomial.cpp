#include<bits/stdc++.h>
using namespace std;

void multiply_poly(int arr1[], int arr2[], int m, int n)
{
    int arr3[m+n-1];
    

    for(int i=0;i<m+n-1;i++)
    arr3[i]=0;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr3[i+j] = arr1[i]*arr2[j];
        }
    }

    for(int k=0;k<m+n-1;k++)
    cout<<arr3[k]<<" ";
}

int main()
{
    // defining the size of both polynomial
    int m, n;
    cin>>m>>n;
    int arr1[m], arr2[n];

    for(int i=0;i<m;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)cin>>arr2[i];
    

    multiply_poly(arr1, arr2, m, n);
    return 0;
}