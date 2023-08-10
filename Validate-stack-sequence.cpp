class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st ; 
        int j = 0 ; 

        for(auto element : pushed) {
            st.push(element) ; 
            while(st.size() > 0 && st.top()== popped[j]){
                st.pop() ;
                j++ ; 
            }
        }
        return 1 ? st.size()==0 : 0 ;
        
    }
};