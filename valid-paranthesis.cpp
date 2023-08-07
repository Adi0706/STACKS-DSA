#include <iostream>
#include <stack>
using namespace std;
// (())--> test case
//ch= (())
    //st = empty
int main()
{
    string str = "{()}";
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // for open brackets
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // closing brackets
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    cout << "Not balanced" << endl;
                    return 0;
                }
            }
            else
            {
                cout << "Not balanced" << endl;
                return 0;
            }
        }
    }

    if (st.empty())
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not balanced" << endl;
    }

    return 0;
}
