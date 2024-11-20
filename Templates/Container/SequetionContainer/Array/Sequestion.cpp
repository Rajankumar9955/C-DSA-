#include<iostream>
using namespace std;
#include<array>
int main(){
     array<int,5>arr{12,35,33,53,53};
     cout<<"size="<<arr.size()<<"\n";
     for(int i=0; i<arr.size(); i++){
        cout<<arr.at(i)<<"\t";
     }
}