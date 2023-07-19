#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str ;
    cout<<"Enter a string you want to reverse :";
    cin>>str ;

    stack<char> st ; 
    for(int i = 0 ; i< str.size();i++)
    {
        st.push(str[i])  ; 
    }

    int j = 0 ;
    while(!st.empty())
    {
        str[j] = st.top();
        st.pop();
        j++ ;
    }

    cout<<"the reversed string is :"<<str ;
    



return 0;
}