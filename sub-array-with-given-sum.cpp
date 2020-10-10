// Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number.
#include<bits/stdc++.h>
using namespace std;


int sub_array_sum(int arr[], int len, int sum)
{
    int curr_sum=0;

    for (int i = 0; i < len; i++)
    {
        curr_sum = arr[i];

        for(int j=i+1; j<len; j++)
        {
            if(curr_sum==sum)
            {
                int p = j-1;
                cout<<"sub array found at the indices "<<i<<" and "<<p;
                return 1;
            }
            if(curr_sum>sum || j==len)
            {
                break;
            }

            curr_sum += arr[j];
        }
    }

    cout<<"no sub array found";
    return 0;  
}

int main()
{
    int arr[] = {15,2,4,8,9,5,10,23};
    int len = sizeof(arr)/sizeof(arr[0]);

    int sum=23;

    sub_array_sum(arr, len, sum);
    return 0;
}
