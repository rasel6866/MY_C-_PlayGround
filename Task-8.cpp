//Copy the elements of one array into another array

#include<iostream>
using namespace std;
int main()
{
        int arra[100],copy[100],i,n;
        cout<<"Input the size of the array : ";
        cin>>n;
        cout<<"Input the elements of the first array";
        for(i=0;i<n;i++)
        {
               cin>>arra[i];
        }
        for(i=0;i<n;i++)
        {
             copy[i]=arra[i];
        }
        cout<<"The copied array is"<<endl;
        for(i=0;i<n;i++)
               cout<<copy[i]<<" ";
        return 0;
}
