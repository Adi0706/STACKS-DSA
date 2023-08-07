#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& st, int x) {
    // Base condition
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Recurrence Relation
    int num = st.top();
    st.pop();

    solve(st, x);

    st.push(num);
}




int main()
{
    int x ;
    cout<<"enter the element you wanna insert at the bottom"<<endl;
    cin>>x ;


    stack<int> st ;
    st.push(7);
    st.push(1);
    st.push(5);
    st.push(5);

    solve(st,x);
    
   while (!st.empty()) {
    int p = st.top();
    cout << p << " " << endl;
    st.pop();
}

return 0;
}