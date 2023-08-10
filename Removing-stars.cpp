#include<iostream>
#include<stack>
using namespace std;
class Solution {
    public:
    string removeStars(string s){
        stack<char> st ; 
        for(auto ch : s){
            if(!st.empty()){
                if(ch=='*'){
                    st.pop();
                }else{
                    st.push(ch) ; 
                }
            }else{
                st.push(ch) ;
            }
        }
        string res="";
        while(!st.empty()){
            char p = st.pop() ;
            res+=p ; 
            st.pop() ;
        }
        return reverse(res.begin(),res.end()) ; 


    }
};





int main()
{
return 0;
}