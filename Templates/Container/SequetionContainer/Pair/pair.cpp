

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

        vector<pair<int,string>>v;
        int t;
        int rollno;
        string name;
        cout<<"Enter how many records\n";
        cin>>t;
        for(int i=1; i<=t; i++)
        {
            cout<<"Enter rollno\n";
            cin>>rollno;
            cout<<"Enter name\n";
            cin>>name;
            v.push_back(make_pair(rollno, name));
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<"\t"<<v[i].second<<"\n";
        }














    // pair<int,string>p {110, "Rajan"};
    // // p=make_pair(110, "Rajan");
    // cout<<p.first<<"\t";
    // cout<<p.second;

}