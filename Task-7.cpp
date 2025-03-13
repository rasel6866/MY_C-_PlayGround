//Display it in reverse order

#include<iostream>
using namespace std;
int main()
{
    int arra[100],i,n;
    cout<<"Enter the size of array= ";
    cin>>n;
    cout<<"Enter the elements of array= ";
    for(i=0;i<n;i++)
    {
        cin>>arra[i];

     }
     cout<<"The values entered in the arrays= ";
     for(i=0;i<n;i++)
        cout<<arra[i]<<" ";

     cout<<endl<<"The values entered in the array in reverse : ";
     for(i=n-1;i>=0;i--)
        cout<<arra[i]<<" ";

     return 0;





}
