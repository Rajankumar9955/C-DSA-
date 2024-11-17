/*#templates:- it is a generalized format OF FUNCTION & CLASS 
There are two types of templates
1. Function Templates
2. Class Templates

#template:- Content palce holder */




#include<iostream>
using namespace std;


template<typename a, typename b>
a grt(a a1, b b1){
    if(a1>b1)
    {
        return a1;
    }
    else
    {
        return b1;
    }
}

// template<template a, template b, template c>
// b srt(b a1, b b1, b c1)
// {
//     return a1+b1+c1;
// }
int main()
{
    cout<<"integer comparing:"<<grt(200,54)<<"\n";
    cout<<"float comparing:"<<grt(2.0,5.4)<<"\n";
    cout<<"char comparing:"<<grt('A','Z')<<"\n";

    // cout<<"addition in template"<<srt(10,10,10);
}
