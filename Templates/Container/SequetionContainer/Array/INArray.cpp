

#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>arr;
    cout<<"Enter 5 values\n";
    for(int i=0; i<arr.size; i++)
    {
        cin>>arr[i];
    }
    cout<<"output is\n";
    for(int i=0; i<arr.size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}