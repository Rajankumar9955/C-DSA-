#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,8,67,8,6,87};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting:";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<",";
    }

    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\nAfter sorting:";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<",";
    }
}