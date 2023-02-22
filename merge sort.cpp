#include<iostream>
using namespace std;
void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];


    }
    for(;i<=mid;i++)B[k++]=A[i];
    for(;j<=h;j++) B[k++]=A[j];
    for(i=l;i<=h;i++) A[i]=B[i];
}
void imergesort(int A[],int n)
{
    int p,l,h,m,i,j;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            m=(l+h)/2;
           Merge(A,l,m,h);
        }
    }
    if(p/2<n)
        Merge(A,0,p/2-1,n-1);

}
int main()
{int i;
int ar[]={1,5,3,2,5,6,9,1},n=8;
imergesort(ar,n);
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
return 0;
}
