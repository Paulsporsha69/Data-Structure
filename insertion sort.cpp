#include<iostream>
using namespace std;
int i,j;
void insertionsort (int A[],int  n)
{
    for( i=1;i<n;i++)
    {
        j=i-1;
int x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
       A[j+1] =x;
    }

}
void print(int A[],int n)
{
    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
}
int main()
{
int A[]={1,2,8,6,9,7,3,4,6,1,0,3,7,8,9};
 int n=sizeof(A)/sizeof(A[0]);
 insertionsort(A,n);
 print(A,n);
}
