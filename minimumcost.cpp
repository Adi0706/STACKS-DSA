#include<iostream>
#include<stack>
using namespace std;
int solve(stack<char> &s , string &str)
{
    // 1 . odd length string
    if(str.length()%2 == 1)
    {
        return -1 ;
    }
    //2 . pushing elements of string into the stack---> removing all the valid pairs

    for(int i = 0 ; i<str.length();i++)
    {
        char ch = str[i] ; 
        if(ch=='{'){//open brackets
            s.push(ch) ; 
        }
        else{
            //closed brackets
            if(!s.empty()&& s.top()=='}')
            {
                s.pop() ; 
            }
            else{
                s.push(ch);
            }
        }
    }

// if stack contains invalid expression , keep a count of closed brackets , then open brackets and apply the formula (closed+1)/2 + (open+1)/2
int closed_bracket = 0 ; int open_bracket = 0 ; 
while(!s.empty()){
    if(s.top()=='{'){
        open_bracket++ ;
    }
    else{
        closed_bracket++ ; 
    }
    s.pop() ;
}

  int ans = (closed_bracket + 1) / 2 + (open_bracket + 1) / 2 ;
return ans ;

}

int main()
{
    string str = "{{" ; 
    stack<char>s ; 

   int result =  solve(s,str) ; 

   cout<<result ;
   

return 0;
}