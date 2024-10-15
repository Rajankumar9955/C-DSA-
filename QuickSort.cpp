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

*/

#include<iostream>
using namespace std;
void qs(int arr[], int low, int high)
{
   if(low<high)
   {
      int pvt;
      pvt=srt(arr,low,high);
      qs(arr,0,pvt-1);
      qs(arr,pvt+1,high);

   }
}
void srt(int arr[], int high, int low)
{

}

 void prntarr( int arr[], int s)
{
   for(int i=0;i<s; i++)
   {
      cout<<arr[i]<<",";
   }
}
int main()
{
    int arr[]={2,56,67,6,8};
    prntarr(arr,5);
    qs(arr,0,4);
}