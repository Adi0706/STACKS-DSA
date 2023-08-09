#include<iostream>
#include<stack>
#include<string>

class Solution {


    public:
    int removeSubString(string s)
    {
        stack<char> st ; 

        for(auto ch : s){
            if(!st.empty() && ((ch=='B' && st.top()=='A') || (ch=='D' && st.top()=='C'))){
                st.pop() ; 
            }
            else{
                st.push(ch) ; 
            }
        }
        return st.size() ; 

    }

};