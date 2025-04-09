#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your array size       : ";
    cin>>n;
    int arr[n];
    cout<<"Enter your array elements   : ";
    for(i=0;i<n;i++)
        {
        cin>>arr[i];}
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                if(arr[i]==arr[j])
                break;
            if(i==j)
                cout<<arr[i]<<" ";
        }
    return 0;
}
