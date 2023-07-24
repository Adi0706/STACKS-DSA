#include<iostream>
#include<stack>
using namespace std;
void sortedStack(stack<int> &st,int x)
{
    //bas condition 
    if(st.empty()|| (!st.empty() && st.top()< x)){
st.push(x) ; 
    }

    int n = st.top() ;
    st.pop();
//recursive call 
sortedStack(st,x);

    st.push(n) ;  

}

void solve(stack<int> &st){

    //base condition
    if(st.empty())
    {
        return ; 
    }
    
int num = st.top();
st.pop() ; 

//asking recursion to do the rest 
solve(st) ; 

//when coming back putting it in sorted way 
sortedStack(st,num) ; 
}
int main()
{
    stack<int> st;

    st.push(3);
    st.push(4) ; 
    st.push(1) ; 
    solve(st) ; 
while (!st.empty()) {
    int p = st.top();
    cout << p << " "; // Add a space after p to separate the elements
    st.pop();
}

return 0;
}