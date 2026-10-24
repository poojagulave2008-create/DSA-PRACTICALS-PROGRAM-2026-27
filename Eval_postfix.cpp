#include <iostream>
#include <cmath>
using namespace std;

class stack {
private:
    int arr[100];
    int top;
public:
    stack() {
        top = -1;
    
    }

    void push (int val) {
        arr[++top] = val;

    }
    int pop () {
        int p = arr[top--];
        return p;
    }

};

int evaluate (char x,int op1,int op2)
{
    if(x=='+') return(op1+op2);
    if(x=='-') return(op1-op2);
    if(x=='*') return(op1*op2);
    if(x=='/') return(op1/op2);
    if(x=='%') return(op1%op2);
    if(x=='$') return(pow(op1,op2));

}

int main(void)
{
    stack s;
    char x;
    int op1,op2,val;

    cout<<"\n Enter the postfix expression :";
    while((x= getchar()) != '\n')
    {
        if(isdigit(x))
        {
        s.push(x-48);
        }
        else
        {
        op2=s.pop();
        op1=s.pop();
        
        val=evaluate (x,op1,op2);
        s.push(val);

        }
    }
    val=s.pop();
    cout<<"\n Answer="<<val;
    return 0;
}
/*PS C:\Users\pooja\OneDrive\Documents\Pooja_gulave> & C:\Users\pooja\OneDrive\Documents\Pooja_gulave\Eval_postfix.exe

 Enter the postfix expression :625+-382/+*2$3+

 Answer=52
PS C:\Users\pooja\OneDrive\Documents\Pooja_gulave> & C:\Users\pooja\OneDrive\Documents\Pooja_gulave\Eval_postfix.exe

 Enter the postfix expression :231*+9-

 Answer=-4
PS C:\Users\pooja\OneDrive\Documents\Pooja_gulave> */