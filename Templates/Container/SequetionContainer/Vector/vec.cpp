


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{10,20,30,40,50};   //:: scope resolution operator
    v.pop_back();
    for(auto j:v)
    {
        cout<<j<<"\t";
    }
    
    cout<<"useof Scope resolution operator\n";     // delete any to use iterator
    vector<int>::iterator it=v.begin();
    cout<<*it;   //point first array position
    cout<<"\t";
    cout<<v[0];   //array first position
    cout<<"\t";
    cout<<*(it+1);   //array second position like this *(it+1) it refer to second position of array


      //using insert function to insert the data
      cout<<"\n";
       v.insert(it+2, 100);  //it insert the data in third position like (it+2)
       for(auto j:v)
       {
          cout<<j<<"\t";
       }
       cout<<"Erase function use for erase the value in the array";
       v.erase(it+2);
       for(auto j:v)
       {
          cout<<j<<"\t";
       }

}