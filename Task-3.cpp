// Merge two arrays of same size
#include<iostream>
using namespace std;
int main()
{

  int frstarr[50],scndarr[50], fstsize, scndsize, size, i, j, k, mergarr[100];
  cout<<"Enter Array 1 Size : ";
  cin>>fstsize;
  cout<<"Enter Array 1 Elements : ";
  for(i=0; i<fstsize; i++)
  {
    cin>>frstarr[i];
                      mergarr[i]=frstarr[i];
  }
  cout<<"Enter Array 2 Size : ";
  cin>>scndsize;
  cout<<"Enter Array 2 Elements : ";
  for(i=0; i<scndsize; i++)
  {
    cin>>scndarr[i];
  }
  size=fstsize+scndsize;
  for(i=0, k=fstsize; k<size && i<scndsize; i++, k++)
  {
    mergarr[k]=scndarr[i];
  }
  cout<<"Now the new array after merging is :\n";
  for(i=0; i<size; i++)
  {
    cout<<mergarr[i]<<"  ";
  }

}
