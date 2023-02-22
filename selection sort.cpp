
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int i,j,k;
void selectionsort (int A[],int  n)
{
    for( i=0;i<n-1;i++)
    {for(j=k=i;j<n;j++)
    {
        if(A[j]<A[k])
            k=j;
    }
    swap(A[i],A[k]);


}   }
void print(int A[],int n)
{
    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
}
int main()
{
int A[]={1,2,8,6,9,7,3,4,6,1,0,3,7,8,9};
 int n=sizeof(A)/sizeof(A[0]);
 selectionsort(A,n);
 print(A,n);
}
