#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int n, int count)
{
    // base condition
    if (count == n / 2)
    {
        if (!st.empty())  // Check if the stack is not empty before popping
            st.pop();
        return;
    }

    int num = st.top();
    st.pop();
    // recursive call
    solve(st, n, count + 1);

    st.push(num);
}

int main()
{
    stack<int> st;

    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    int n = st.size(); // Calculate the size of the stack after pushing elements.

    solve(st, n, 0);

    while (!st.empty())
    {
        int p = st.top(); // Use int instead of char for integer values.
        st.pop();
        cout << p << " " << endl;
    }

    return 0;
}
