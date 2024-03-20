#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size = ";
    cin>>n;
    int arr[n] ;
    cout<<"enter element = ";
  //input
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
   int max =  INT_MIN;
   
   for (int i = 1; i <= n-1; i++)
   {
    if (max<arr[i])
    {
        max = arr[i];
    }
   }
   cout<<"largest element : "<<max<<endl;
   int x = INT_MIN;//start with INT_MIN
   
   for (int i = 0; i <= n-1; i++)
   {
    if (x<arr[i] && arr[i]!=max)
    {
        x = arr[i];
    }
   }
   cout<<"second largest element : "<<x<<endl;
      int y = INT_MIN;//start with INT_MIN
   
   for (int i = 0; i <= n-1; i++)
   {
    if (y<arr[i] && arr[i]!=max && arr[i]!=x)
    {
        y = arr[i];
    }
   }
   cout<<"third largest element : "<<y;
}