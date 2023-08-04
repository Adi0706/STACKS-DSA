lass Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st ; 

        for(int i = 0 ;i<s.length();i++){
            
            if(st.empty() || st.top() !=s[i]){
                st.push(s[i]) ; 
            }else
            {
                st.pop() ; 
            }
        }
        string ans = "" ; 
        while(!st.empty()){
            char element = st.top() ;
            st.pop() ;

            ans  += element ; 
        }
        reverse(ans.begin(),ans.end()) ; 
        return ans ;
    }
};