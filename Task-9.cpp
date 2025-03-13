//Find even & odd element in an array.

#include<iostream>
using namespace std;
int main()
{
    int arra[100],i,n,even;
    cout<<"Enter the size of array= ";
    cin>>n;
    cout<<"Enter the elements of array= ";
    for(i=0;i<n;i++)
        cin>>arra[i];

    for(i=0;i<n;i++)

    {

        if(arra[i]%2==0)
            cout<<"Even elements = "<<arra[i]<<" "<<endl;

    }

    for(i=0;i<n;i++)

    {
        if(arra[i]%2!=0)
            cout<<"Odd elements = "<<arra[i]<<" "<<endl;

    }
    return 0;


}
