#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int left,int right,int x)                  /*****************Recursive Approach*************/      
{
    if(left>right)
    return -1;
    else
    {
        int mid=(left+right)/2;
        if(arr[mid]==x)
        return mid;
        else if(x>arr[mid])
        return BinarySearch(arr,mid+1,right,x);
        else
        return BinarySearch(arr,left,mid-1,x);
    }
}

int binarySearch(int arr[], int left, int right, int x)             /*****************Iterative Approach*************/
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        return mid;
        else if (arr[mid] < x)
        left = mid + 1;
        else
        right = mid - 1;
    }

     return -1;
}

int main()
{
    int n;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in the Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the search element x : ";
    cin>>x;
    int output=BinarySearch(arr,0,n-1,x);         //output=index of the search element
    (output!=-1)?(cout<<"Index of x in the Array is "<<output):(cout<<"x is not in the array");
    
    return 0;
}