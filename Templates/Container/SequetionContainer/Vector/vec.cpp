


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{10,20,30,40,50};
    v.pop_back();
    for(auto j:v)
    {
        cout<<j<<"\t";
    }
}