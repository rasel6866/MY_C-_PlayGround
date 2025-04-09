#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your array size      : ";
    cin>>n;
    int arr[n];
    cout<<"Enter your array numbers   : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your entered numbers are   : ";
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Your numbers in reverse    : ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
