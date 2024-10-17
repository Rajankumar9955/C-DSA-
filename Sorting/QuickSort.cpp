/* first let first element as a pivot element 
   and lets two point like p and q 
   p is stay in one step away from pivot element
   if p is greater than  ans equal pivote element then stop
   if q is less than and equal pivote element then stop 
   ans then if doesnot cross the each element then  exchange the position or p and q
   and then p and q cross to each other then q exchange with pivote element


   key:- (there are two pointer like p,q and pv means pivote elements)
   (1)if p>=pv :- stop
   (2)if q<pv :-   stop
   (3)if (p<q) swap between (p,q)
   (4)if p cross q then swap(p,pv)


   Quick sort:- it is not Stable (if a two same value in an array then the any value change the position)
   T.C:- o(nlogn);
   S.C:- o(1); constant
   Approach:- Divide and conquer
   inplace:- inplace              (if i'm not use another array to solve the problem then)

*/

// #include<iostream>
// using namespace std;
// int srt(int arr[], int low, int high)
// {
//       int pvt=arr[low];
//       int p=low+1;
//       int q=high;
//       int tmp;
//       do{
//          while(arr[p]<pvt)
//          {
//             p++;
//          }
//          while(arr[q]>pvt)
//          {
//             q--;
//          }
//          if(p<q)
//          {
//             tmp=arr[p];
//             arr[p]=arr[q];
//             arr[q]=tmp;
//          }
//       }
//       while(p<q)
//       {
//          tmp=arr[low];
//          arr[low]=arr[high];
//          arr[high]=tmp;
//          return q;
//       }

// void qs(int arr[], int low, int high)
// {
//    if(low<high)
//    {
//       int pvt;
//       pvt=srt(arr, low, high);
//       qs(arr, 0, pvt-1);
//       qs(arr, pvt+1, high);
//    }
// }
// }
//  void prntarr( int arr[], int s)
// {
//    for(int i=0;i<s; i++)
//    {
//       cout<<arr[i]<<",";
//    }
// }
// int main()
// {
//     int arr[]={2,56,67,6,8};
//     prntarr(arr,5);
//     qs(arr,0,4);
//     cout<<"\nAfter Applying Quick Sort\n";
//     prntarr(arr,5);
// }


#include<iostream>
using namespace std;
int srt(int arr[], int low, int high){
int pvt=arr[low];
int p=low+1;
int q=high;
int tmp;
do{
   while(arr[p]<pvt)
   {
      p++;
   }
   while(arr[q]>pvt){
      q--;
   }
   if(p<q)
   {
      tmp=arr[p];
      arr[p]=arr[q];
      arr[q]=tmp;
   }
}while(p<q){
   tmp=arr[low];
   arr[low]=arr[high];
   arr[high]=tmp;
   return q;
}
}
void qs(int arr[], int low, int high)
{
     if(low<high){
      pvt=srt(arr,low,high);
      qs(arr,0, pvt-1);
      qs(arr,pvt+1, high);
     }
}
void prntarr(int arr[], int s){
   for(int i=0; i<s; i++)
   {
      cout<<arr[i]<<",";
   }
}
int main()
{
   int arr[]={8,7,89,27,64};
   prntarr(arr,5);
   qs(arr,0,4);
   cout<<"after Applying Quick sort\n";
   prntarr(arr,5);
}