

/*
pair is a class template which is having two parameter and we can insert the value with the help of 
make_pair function (This is inbuild function)
we can access the first element by using first keyword along with object name and second element will be
access by second keyword along with object
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int,string>p;
    p=make_pair(110, "Rajan");
    cout<<p.first<<"\t";
    cout<<p.second;

}