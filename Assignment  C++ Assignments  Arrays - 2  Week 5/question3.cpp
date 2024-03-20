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
    cout<<endl;
   for (int i = 1; i <= n-1; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   //to check
   bool x = false;
   for (int i = 0; i < n-1; i++)
   {
    if (arr[i-1]>arr[i])
        {
            cout<<"array is not sorted";
            return 0;
        }
    }
    
}  
  