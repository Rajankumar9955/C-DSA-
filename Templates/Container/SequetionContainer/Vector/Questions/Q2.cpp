/*
question1
W.A.P to return true if the values of an array are consecutive else return false
Ex1:-// input A[0,1,4,2,5];   ouput:- false
Ex2:-//input A[0,1,5,4,3,2];   output:- True;

question2
WAP to change the first character of each string of a sentense into uppercase
ex1:- input A ="how much quantity"   output:- How Much Quantity
*/

#include<iostream>
#include<vector>
using namespace std;
// vector<int>test(vector<int>&v)
int main()
{
    vector<int>v{5,10,2,6,41,25,32,4};
    sort(v.begin(), v.end());
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}