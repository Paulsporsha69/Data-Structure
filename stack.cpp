
#include<iostream>
using namespace std;
int stack[100],x=100,top=-1;
void push(int val)
{
    if(top>=x-1){
        cout<<"stack overflow"<<endl;
    }
    else {
        top++;
        stack [top]=val;
    }

}
void pop()
{
    if(top<=-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        cout<<"The popped element is :"<<stack[top]<<endl;
        top--;
    }
}
void Top()
{
        if(top<=-1)
    {
        cout<<"Stack empty"<<endl;
    }
    else
    cout<<"The top element is:"<<stack[top]<<endl;
}
void display()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack elements are :"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";

        }cout<<endl;
    }
}
int main()
{
    int ch,val;
    cout<<"Press 1 for push element"<<endl;
        cout<<"Press 2 for pop element"<<endl;
            cout<<"Press 3 for Display element"<<endl;
                cout<<"Press 4 for print the top element"<<endl;

                cout<<"Press 5 for exit"<<endl;
int n;

while(1){cin>>n;
if(n==1)
{
    cout<<"Enter value for push :";
    cin>>val;
    push(val);

}
 else if (n==2)
{
    pop();

}
else if (n==3)
{
    display();

}
else if (n==4)
{
    Top();

}
else {
        cout<<"Exit";
break;
}
}
}
