#include<iostream>
using namespace std;
int ackerman(int a,int b)
{
    int m=a,n=b;
    if(m==0)
    {
        return n+1;
    }
    else if(m>0 && n==0)
    {
        return  ackerman(m-1,1);
    }
    else if (n>0 && m>0){
        return ackerman(m-1,ackerman(m,n-1));

    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ackerman(a,b)<<endl;
    return 0;
}
