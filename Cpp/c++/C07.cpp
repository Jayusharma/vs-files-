//Find the sum of even integers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=2;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
cout<<"value of sum is "<<sum<<endl;
}