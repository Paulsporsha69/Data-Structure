//Using inbuilt stack library to create stack
#include<iostream>
#include<stack>
using namespace std;
int priority(char str)
{
    if(str=='+' || str =='-')
        return 1;

         if(str=='*' || str =='/')
        return 2;
         if(str=='^')
        return 3;

        return 0;

}
string convert (string infix)
{
    int i=0;
    string postfix="";
    stack<int>s;// using inbuilt stack< > from C++ stack library
    while(infix[i]!='\0')
    {
      // if operand add to the postfix expression
      if(infix[i]>='a' && infix[i]<='z' ||infix[i]>='A' && infix[i]<='Z' )
      {
          postfix+=infix[i];
          i++;
      }
      else if(infix[i]=='(')
      {
          s.push(infix[i]);
              i++;


      }
      else if(infix[i]==')')
      {
         while(s.top()!='(')
         {
             postfix+=s.top();
             s.pop();
         }
         s.pop();
         i++;
      }
      else
      {
          while(!s.empty() && priority(infix[i])<=priority(s.top()))
          {
              postfix+=s.top();
              s.pop();
          }
          s.push(infix[i]);
          i++;
      }

    }
    while(!s.empty())
    {
        postfix+=s.top();
        s.pop();
    }

    cout<<"Postfix :"<<postfix;
    return postfix;

    }
    int main()
    {
        string sp;
        cin>>sp;
        string pf;
        pf =convert(sp);
        return 0;
    }
