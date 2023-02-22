#include<iostream>
using namespace std;
recurse(int a)
{
    int x=a;
    if(x<=1)
        return 1;
   else
        return x*recurse(x-1);


}
int main()
{
    int y;
    cin>>y;
    cout<<recurse(y)<<endl;
}
