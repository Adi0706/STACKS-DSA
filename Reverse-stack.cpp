#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> ans;

    //pushing into the stack
    st.push(7);
    st.push(5);
    st.push(1);
    st.push(2);

    // Printing the original stack
    cout << "Original stack elements are: ";
    stack<int> temp = st; // Create a temporary stack to preserve original order
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Reversing the stack
    while (!st.empty())
    {
        int num = st.top();
        st.pop();
        ans.push(num);
    }

    // Printing the reversed stack
    cout << "Reversed stack elements are: ";
    while (!ans.empty())
    {
        int p = ans.top();
        cout << p << " ";
        ans.pop();
    }
    cout << endl;

    return 0;
}
