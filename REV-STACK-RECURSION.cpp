#include<iostream>
#include<stack>

using namespace std ;


void insertAtBottom(stack<int> &st,int x)
{
    
    // Base condition
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Recurrence Relation
    int num = st.top();
    st.pop();

  insertAtBottom(st, x);

    st.push(num);
}

void revStack(stack<int>&st)
{

  int num = st.top() ; 
  st.pop() ;

  revStack(st);

  insertAtBottom(st,num);

}

using namespace std;
int main()
{
    stack<int> st ;
    st.push(1);
    st.push(2);
    st.push(3);

    revStack(st);

    while(!st.empty())
    {
        int p = st.top();
        cout << p << ""<<endl;
        st.pop() ;
    }



return 0;
}