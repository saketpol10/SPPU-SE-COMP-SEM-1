#include <iostream>

using namespace std;

#define size 10

class Stack
{
    int top;
    char exp[size];

public:
    Stack()
    {
        top = -1;  // initialize stack
    }
    void push(char);
    char pop();
    int full();
    int empty();
};

void Stack::push(char x)
{
    top = top + 1;
    exp[top] = x;
}

char Stack::pop()
{
    char s;
    s = exp[top];
    top = top - 1;
    return s;
}

int Stack::full()
{
    if (top == size)
        return 1;
    else
        return 0;
}

int Stack::empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int main()
{
    Stack s1;
    char stack[20], ch,ch1;
    int i = 0;
    //do
   // {
	
		
    cout << "\nEnter the expression : ";
    cin >> stack;
    if ((stack[0] == ')') || (stack[0] == ']') || (stack[0] == '}'))
    {
        cout << "\n Invalid Expression.....\n";
        return 0;
    }
    else
    {
        while (stack[i] != '\0')
        {
            ch = stack[i];
            switch (ch)
            {
            case '(':
                s1.push(ch);
                break;
            case '[':
                s1.push(ch);
                break;
            case '{':
                s1.push(ch);
                break;
            case ')':
                s1.pop();
                break;
            case ']':
                s1.pop();
                break;
            case '}':
                s1.pop();
                break;
            }
            i = i + 1;
        }
    }
        if (s1.empty())
    {
        cout << "Expression has well parenthesis !"<<endl;
    }
    	else 
    	{
    		cout<<"Expression is not well paranthesized!!"<<endl;
		}
	/*cout<<"Do you want to continue Enter y to continue or n to exit : "<<endl;
	cin>>ch1;
}
	while(ch1=='y' && ch1!='n');*/
}
	