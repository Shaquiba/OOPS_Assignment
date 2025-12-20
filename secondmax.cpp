//program to find 2nd largest

#include <iostream>
using namespace std;

int main(){
    int n, arr[50];
    cout<<"enter n;";
    cin>>n;

    for (int i = 0; i < n; i++)
    cin>>arr[i];

    int largest = arr[0], sec_largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]>largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }else if (arr[i] > sec_largest && arr[i]!= largest)
        {
           sec_largest = arr[i];
        }
    }
    cout<<"second largest element is = "<<sec_largest;
    return 0;
    
}