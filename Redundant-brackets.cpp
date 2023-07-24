#include<iostream>
#include<stack>
#include <string>
using namespace std;
bool redundant(stack<char>&st,string &str)

{
    
    for(int i = 0 ;i< str.length();i++)
    {
        char ch = str[i] ; 
        if(ch=='('|| ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            st.push(ch) ; 
        }
        else{
            if (ch==')')
            {
                bool isRedundant = true ; 
                while(st.top() != '(')
                {
                     
                    char top = st.top() ; 
                    if( top=='+'|| top=='-'|| top=='*'|| top=='/'){
                        isRedundant = false ; 
                    }
                    st.pop() ;
                }
                 if(isRedundant = true )
            {
                return true ; 
                st.pop() ;
            }
                
            }

           
        }
        
    }
    return false ; 

}
int main()
{
    string str = "(a+b)";
    stack<char> st;

    if (redundant(st, str))
    {
        cout << "Expression contains redundant brackets." << endl;
    }
    else
    {
        cout << "Expression does not contain redundant brackets." << endl;
    }

    return 0;
}
