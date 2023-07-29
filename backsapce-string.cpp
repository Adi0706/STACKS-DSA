class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1 ; 
        stack<char>s2 ; 
        for(int i = 0 ;i<s.length();i++)
        {
            char ch = s[i] ; 
           if(!s1.empty() && ch=='#'){
               s1.pop();
           }
           else{
               if(ch!='#')
               {
                   s1.push(ch) ; 
               }
           }
        }

        for(int j = 0 ;j<t.length();j++)
        {
            char ch1 = t[j] ; 
            if(!s2.empty() && ch1=='#')
            {
                s2.pop() ;
            }
            else{
                if(ch1!='#'){
            s2.push(ch1) ; 
                }
            }
        }
            
         while (!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            }
            s1.pop();
            s2.pop();
        }

        // If both stacks are empty, the strings are equal
        return s1.empty() && s2.empty();
    }
};