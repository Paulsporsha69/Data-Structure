#include<iostream>
using namespace std;
void Insert(int A[],int n)
{
    int i=n,temp;
    temp=A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}
int Delete(int A[],int n)
{
    int i,j,k,val;
    val=A[1];
    k=A[n];
    A[1]=k;
    A[n]=val;
    i=1;j=i*2;
    while(j<=n-1)
    {
        if(j<n-1 && A[j+1]>A[j]) j=j+1;
        if(A[i]<A[j])
        {
            swap(A[i],A[j]);
            i=j;
            j=j*2;

        }
        else
            break;
    }
    return val;
}
int main()
{int i;
    int H[]={0,14,15,5,20,30,8,40};
    for( i=2;i<=7;i++) Insert(H,i);
cout<<"Deleted value is :"<<Delete(H,7)<<endl; for( i=1;i<=7;i++)
    cout<<H[i]<<endl;
cout<<"Deleted value is :"<<Delete(H,6)<<endl;
 for( i=1;i<=7;i++)
    cout<<H[i]<<endl;


    return 0;
}
