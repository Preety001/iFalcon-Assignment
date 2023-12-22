class Assignment {
public:
    bool isValid(string s)
    {
        stack<char>Stack;
        for (auto &ch : s)
        {
            if (ch == '(' or ch == '{' or ch == '[')
            {
                Stack.push(ch);
            }

            else
            {
                if (Stack.empty())return false;
                if (  (Stack.top() == '(' and ch == ')')   or  (Stack.top() == '{' and ch == '}') or (Stack.top() == '[' and ch == ']'))
                {
                    Stack.pop();
                }
                else return false;
            }
        }

        return Stack.empty();
    }
};


// The code with main function

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> Stack;
    for (auto &ch : s)
    {
        if (ch == '(' or ch == '{' or ch == '[')
        {
            Stack.push(ch);
        }

        else
        {
            if (Stack.empty())
                return false;
            if ((Stack.top() == '(' and ch == ')') or (Stack.top() == '{' and ch == '}') or (Stack.top() == '[' and ch == ']'))
            {
                Stack.pop();
            }
            else
                return false;
        }
    }

    return Stack.empty();
}

int main()
{
    int numberOfTestcases;
    cout<<"Enter the number of testcases you want to test: ";
    cin >> numberOfTestcases;

    while (numberOfTestcases--)
    {
        string s;
        cout << "Enter the input string: ";
        cin >> s;

        if (isValid(s))
        {
            cout << "The input string is valid" << endl;
        }
        else
        {
            cout << "The input string is invalid" << endl;
        }
    }
    return 0;
}

