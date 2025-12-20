 //input and display array elements

#include<iostream>
using namespace std;

int main(){
     int n, arr[10];
     cout<<"enter n:";
     
     cin>>n;

     for(int i=0; i<n; i++)
     cin>>arr[i];

     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";

     return 0;
}