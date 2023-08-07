class Solution {
public:
    int maxDepth(string s) {
        stack<int> st ; 
        int depth = 0 , count = 0 ;
        for(char c : s){
            if(c=='('){
                st.push(c) ;
                count ++ ; 
            }if(c==')'){
                st.pop() ; 
                count -- ;
            }
            depth = max(depth,count) ; 
        }
        return depth ; 
        
    }
};