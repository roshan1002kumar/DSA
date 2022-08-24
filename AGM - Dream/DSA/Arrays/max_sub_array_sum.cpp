#include <iostream>
using namespace std;

int brute_force(int arr[], int n)
{
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // print all sub-array 
                cout<<arr[k]<< " ";
                sum += arr[k];
            }
            cout<<endl;
            if (max_sum < sum)
            {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

int using_cumulative_sum(int arr[],int cum_sum[],int n)
{
    int max_sum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int current_sum=0;
            current_sum = cum_sum[j] - cum_sum[i-1];
            max_sum = max(current_sum,max_sum);
        }
    }
    return max_sum;
}

int using_kadanes_algo(int arr[],int n)
{
    
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cum_sum[n];
    cum_sum[-1]=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cum_sum[i]=cum_sum[i-1]+arr[i];

    }
    // cout<<brute_force(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<cum_sum[i]<<" ";
    }

    cout<<using_cumulative_sum(arr,cum_sum,n);
}
