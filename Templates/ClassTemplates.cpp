#include<iostream>
using namespace std;
template<typename c1, typename c2>
class student{
    c1 age;
    c2 salary;
    public:student(c1 a,c2 s)
    {
        age=a;
        salary=s;
    }
    void show(){
        cout<<"Age="<<age<<"\n";
        cout<<"salary="<<salary<<"\n";
    }
};
int main(){
    student<int,float>obj(21,32000.9); //space occupied by object will be decided once we have passed the data type
    obj.show();
}

/*

age=21;
salary:32000.9

*/