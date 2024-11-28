

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string c;
    cout<<"memory of string="<<sizeof(c)<<"\n";
    cout<<"enter ur name:\n";
    getline(cin,c);
    cout<<c<<"\n";
    c.push_back('k');
    cout<<"String="<<c<<"\n";
    c.pop_pop();
    cout<<"now string="<<c;
}