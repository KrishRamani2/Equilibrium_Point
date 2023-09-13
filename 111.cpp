#include <iostream>
#include <cmath>
using namespace std;
bool Equilibrium(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int ls=0,res=0;
        for(int j=0;j<i;j++)
        {ls+=arr[j];}
        for(int k=i+1;k<n;k++)
        {res+=arr[k];}
        if(ls== res)
        return true;
    }
    return false;
}
int main()
{
    int arr[]={4,2,2},n=3;
    cout<<Equilibrium(arr,n);
}