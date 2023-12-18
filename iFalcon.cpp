class Solution {
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