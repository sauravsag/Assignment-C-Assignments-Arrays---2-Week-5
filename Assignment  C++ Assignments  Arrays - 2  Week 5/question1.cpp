#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i <a.size(); i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(3);
   v.push_back(5);
    display(v);
    int n = v.size();
    int z;
    cout<<"enter a number : ";
    cin>>z;
    int greater = 0;
    for (int i = 0; i < n; i++)
    {
       if (v[i]>z)
       {
        greater++;
       }
       
    }
    cout<<"number of elements greater than "<<z<<" : "<<greater;
    
}