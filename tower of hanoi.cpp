#include<iostream>
using namespace std;
void Toh(int n,char src,char helper ,char des)
{
if(n==0)
{
    return ;

}
    Toh(n-1,src,des,helper);
    cout<<"Move disk "<<n<<" from rod "<<src<<" to rod "<<des<<endl;
    Toh(n-1,helper,src,des);


}
int main()
{
int     n=5;
    Toh(n,'A','B','C');

}
