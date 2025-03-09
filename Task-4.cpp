//Maximum and minimum element in an array

#include<iostream>
using namespace std;
int main()
{
    int arra[100],i,n,maximum,minimum;
    cout<<"Enter size of the array= ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
        cin>>arra[i];

        maximum=arra[0];
    for(i=0;i<n;i++)
    {
        if(maximum<arra[i])
          (maximum=arra[i]);
    }
    minimum=arra[0];
    for(i=0;i<n;i++)
    {
        if(minimum>arra[i])
            (minimum=arra[i]);
    }
    cout<<"Maximum number is= "<<maximum<<endl;
    cout<<"Minimum number is= "<<minimum;

    return 0;

}

