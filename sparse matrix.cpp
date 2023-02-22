#include<iostream>
using namespace std;
int main ()
{
    int a[5][5];
    int i,j,k,l;
         cin>>k>>l;
for(i=0;i<k;i++)
{
    for(j=0;j<l;j++){
        cin>>a[i][j];
    }
}
cout<<"Row"<<" "<<"Column"<<" "<<"Value"<<endl;
for(i=0;i<k;i++)
{
    for(j=0;j<l;j++){
        if(a[i][j]!=0){
            cout<<i<<"     "<<j<<"     "<<a[i][j]<<endl;
        }
    }

}


}
