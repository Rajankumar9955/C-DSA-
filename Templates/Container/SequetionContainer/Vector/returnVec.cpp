#include<iostream>
#include<vector>
using namespace std;

vector<int>test(vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        v[i]=v[i]+1;
        // cout<<v[i]<<"\t";
    }
    return v;
}
int main()
{
    vector<int>v{2,3,15,4,9,6};
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    test(v);
    cout<<"\nAfter calling function\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}