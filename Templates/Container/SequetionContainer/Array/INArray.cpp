
// #include<iostream>
// using namespace std;
// #include<array>
// int main()
// {
//     array<int,5>arr;
//     cout<<"Enter 5 values\n";
//     for(int i=0; i<arr.size(); i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"output is\n";
//     for(int i=0; i<arr.size(); i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
//     cout<<"\n";
//     cout<<"index of 0 indexing:"<<arr.front()<<"\n";  //first data return in array
//     cout<<"Value at n-1 indexing:"<<arr.back()<<"\n";  //last Data return in array
// }

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

    array<int,5>d{10,20,30,40,50};
    cout<<"Output of second array is\n";
    for(int i=0; i<arr.size(); i++)
    {
        cout<<d[i]<<"\t";
    }
    arr.swap(d);
    cout<<"After swapping output of first array is \n";
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"After swapping output of Second array is \n";
    for(int i=0; i<d.size(); i++)
    {
        cout<<d[i]<<"\t";
    }
}




