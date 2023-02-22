#include<iostream>
using namespace std;
recurse(int a)
{
    int x=a;
    if(x>0){cout<<x<<" ";
        recurse (x-1);


    }
}
int main()
{
    int y;
    cin>>y;
    recurse(y);
}
