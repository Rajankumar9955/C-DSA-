/*
question1
W.A.P to return true if the values of an array are consecutive else return false
Ex1:-// input A[0,1,4,2,5];   ouput:- false
Ex2:-//input A[0,1,5,4,3,2];   output:- True;

question2
WAP to change the first character of each string of a sentense into uppercase
ex1:- input A ="how much quantity"   output:- How Much Quantity


Question3:
WAP to return true if second string found in a first string
input:- s1:-"HEMANT"  s2:"HE"   output:-true
input:- s1:-"honey"  s2:"ne"    output:-false
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool consecutive(vector<int>vec){
    sort(vec.begin(), v.end());
    for(int i=0; i<vec.size()-1; i++)
    {
        if(vec[i+1]!=vec[i]+1)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    vector<int>v{5,10,2,6,41,25,32,4};
    if(consecutive(v))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}