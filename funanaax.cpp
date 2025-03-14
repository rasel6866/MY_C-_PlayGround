#include<iostream>
using namespace std;
int area(int num)
{
    cout<<"square is    "<<num*num<<endl;
    cout<<"Rectangle is "<<num*num<<endl;
    cout<<"Triangle is  "<<0.5*num*num<<endl;
}
int main()
{
int number;
cout<<"Enter a number :  ";
cin>>number;
area(number);
return 0;
}
