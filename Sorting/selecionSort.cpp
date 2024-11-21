/*sort:- selecion sort is slower than bubble sort it takes more time to compare the values and the time complexity in average case,worst case as well as in best case in 0(n*n)
approach :- substract ans conquer
inplace or not :- inplace 
structure based selection sort 
it is stable 
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={5,6,8,578,5474,8,724};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     int temp=0,c;
//     cout<<"Before sorting in selection sort";
//     for( c=0; c<s; c++)
//     {
//         cout<<arr[c]<<",";
//     }

//     for( c=0; c<s-1; c++)
//     {
//         int min=c;
//         while(min>0 && arr[min]<arr[min-1])
//         {
//             temp=arr[min];
//             arr[min]=arr[min-1];
//             arr[min-1]=temp;
//             min--;
//         }
      
//     }

// cout<<"/n After Applying Selection sort ";
//     for(int i=0; i<s-1; i++){
//         cout<<arr[i]<<",";
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int arr[]={55,8,5,7,5,7,5};
    int chotu;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" Before Applying Selection sort";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }

    for(int i=0; i<n; i++)
    {
        chotu=i;
        for(int j=i+1; j<n; ++j)
        {
             if(arr[chotu]>arr[j])
             {
                chotu=j;
             }
        }
        if(chotu!=i)
        {
            int temp;
            temp=arr[chotu];
            arr[chotu]=arr[i];
            arr[i]=temp;
        }
    }
cout<<"\nafter applying selecion sort\t";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
}
