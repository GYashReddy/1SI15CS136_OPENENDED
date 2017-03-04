# 1SI15CS136_SIT_CSE_OOPLAB
#include <iostream>
using namespace std;
const int MAX=2;

class stack
{
    protected:int st[MAX];
              int top;
              
      public:stack()  {top=0;}
             void push(int var){ st[++top]=var;}
             int pop() { return st[top--];}
};

class stack2:public stack
{
    public:void push(int var)
           {
            if(top<MAX)
                stack::push(var);
            else
                cout<<"\nError stack is full\n"<<endl;
           }
};

int main()
{
    stack2 s1;
    stack s;
    
    s.push(23);
    s1.push(11); s1.push(22); s1.push(33);
    cout<<endl<<s1.pop()<<"\n"<<s1.pop()<<"\n"<<s1.pop()<<endl<<s1.pop()<<endl;
}
