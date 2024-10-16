/*
Insertion sort is also called Online algorithm (online Data)
time complexity: best case o(n), worst case o(n*n), average o(n*n)
space complexity: o(1) (constant)
approach: substract and conquer  (both value & structure)
it is stable
it is inplace
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,5,6,484,2,7,8,1,8,1,6,485};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min,temp=0;
    cout<<"Before using insertion sort";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";

    }
    for(int i=1; i<n; i++)
    {
        min=i;
        while(min>0 && arr[min]<arr[min-1])
        {
            temp=arr[min];
            arr[min]=arr[min-1];
            arr[min-1]=temp;
            min--;
        }
    }
    cout<<"\nAfter using Insertion sort";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }

}