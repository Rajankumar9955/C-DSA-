

#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>arr;
    cout<<"Enter 5 values\n";
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<"output is\n";
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    cout<<"index of 0 indexing:"<<arr.front()<<"\n";  //first data return in array
    cout<<"Value at n-1 indexing:"<<arr.back()<<"\n";  //last Data return in array
}