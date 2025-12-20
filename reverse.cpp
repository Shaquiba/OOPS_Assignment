// reversing an array

#include <iostream>
using namespace std;

int main()
{
    int n, arr[50];
    cout << "enter n:";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
        cout << "Before reversal: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout<<"after reversal: ";
    for (int i = n - 1; i >= 0; i--)
    cout<< arr[i]<<" ";

    return 0;
}