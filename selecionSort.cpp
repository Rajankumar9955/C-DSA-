/*sort:- selecion sort is slower than bubble sort it takes more time to compare the values and the time complexity in average case,worst case as well as in best case in 0(n*n)
it is also called online data
*/


#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,8,578,5474,8,72};
    int s=sizeof(arr)/sizeof(arr[0]);
    int temp=0,c;
    cout<<"Before sorting in selection sort";
    for( c=0; c<s; c++)
    {
        cout<<arr[c]<<",";
    }


    for( c=0; c<s-1; c++)
    {
        int min=c;
        while(min>0 && arr[min]<arr[min-1])
        {
            temp=arr[min];
            arr[min]=arr[min-1];
            arr[min-1]=temp;
            min--;
        }
      
    }

cout<<"/n After Applying Selection sort ";
    for(int i=0; i<s-1; i++){
        cout<<arr[i]<<",";
    }
}