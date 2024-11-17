/*#templates:- it is a generalized format OF FUNCTION & CLASS 
There are two types of templates
1. Function Templates
2. Class Templates

#template:- Content palce holder */




#include<iostream>
using namespace std;


template<typename a, typename b,typename c>
a grt(a a1, b b1, c c1){

    return a1+b1+c1;
    // if(a1>b1)
    // {
    //     return a1;
    // }
    // else
    // {
    //     return b1;
    // }
}

// template<typename a, typename b, typename c>
// c srt(c r1,c r2, c r3)
// {
//     return r1+r2+r3;
// }

int main()
{
    cout<<"integer comparing:"<<grt(200,54,15)<<"\n";
    // cout<<"float comparing:"<<grt(2.0,5.4)<<"\n";
    // cout<<"char comparing:"<<grt('A','Z')<<"\n";

    // cout<<"using second method:"<<srt(10,10,10);

}
