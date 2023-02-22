///normal
/*#include<iostream>
int queue [100],x=100,r=-1,f=-1;
using namespace std;
enqueue(int a)
{
if(r==-1&& f==-1)
   {
       r=f=0;
       queue [f]=a;

   }
   else if(r==x-1)
   {
       cout<<"Overflow"<<endl;
   }
   else
   {
       r++;
       queue [r]=a;
   }
}
deque()
{
   if(r==-1 && f==-1)
   {
       cout<<"Empty"<<endl;
   }
   else
   {
       cout<<"The deque element is :"<<queue[f]<<endl;
   f++;

   }
}
void display()


{
   if(r==-1 && f==-1)   {
       cout<<"Empty"<<endl;
   }
   else
   {
       cout<<"The elements are :";
       for(int i=f;i<=r;i++)
        cout<<queue[i]<<" ";
        cout<<endl;
   }
}
int main()
{
    int n;
    while(1)
    {
        cout<<"Press 1 for enque"<<endl;
        cout<<"Press 2 for deque"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 4 for exit"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"Enter an element :";
            int x;
            cin>>x;
            enqueue(x);
            }
            if(n==2)
        {
        deque();
            }
              if(n==3)
        {
        display();
            }
            if(n==4)
            {
                break;
            }


    }
}
*/
///circular queue
#include<iostream>
int queue [5],x=5,r=-1,f=-1;
using namespace std;
enqueue(int a)
{

   if(r==-1&& f==-1)
   {
       r=f=0;
       queue [r]=a;

   }
   else if((r+1)%5==f)
   {
       cout<<"Overflow"<<endl;
   }
   else
   {
       r=(r+1)%5;
       queue [r]=a;
   }
}
deque()
{
   if(r==-1 && f==-1)
   {
       cout<<"Empty"<<endl;
   }
   else if (r==f)
   {       cout<<"The deque element is :"<<queue[f]<<endl;
r=f=-1;

   }
   else
   {
       cout<<"The deque element is :"<<queue[f]<<endl;
   f=(f+1)%5;

   }
}
void display()
{
   if(r==-1 && f==-1)   {
       cout<<"Empty"<<endl;
   }
   else
   {
       cout<<"The elements are :";
       int i=f;
       while(i!=r){
               cout<<queue[i]<<" ";
               i=(i+1)%5;

   }
   cout<<queue[r]<<endl;
}}
int main()
{
    int n;
    while(1)
    {
        cout<<"Press 1 for enque"<<endl;
        cout<<"Press 2 for deque"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 4 for exit"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"Enter an element :";
            int x;
            cin>>x;
            enqueue(x);
            }
            if(n==2)
        {
        deque();
            }
              if(n==3)
        {
        display();
            }
            if(n==4)
            {
                break;
            }


    }
}

