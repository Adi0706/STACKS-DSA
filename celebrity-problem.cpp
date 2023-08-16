#include<iostream>
using namespace std;
class Solution {
    public:
    int Celebrity(vector<vector<int>> &M , int n){
        stack<int> s ; 
        //pushing all the elements in the stack 
        for(int i = 0 ;i<n ;i++){
            s.push(i) ; 
        }

        //pop 2 elments till size of stack is equal to one . check whether they know each other or not 
        while(s.size() > 1 ){
            int a = s.top() ;
            s.pop() ;
            int b = s.top() ; 
            s.pop() ; 

            if(knows(M,a,b)){
                s.push(b) ; 
            }else{
                s.push(a) ; 
            }
        }
         
         int candidate = s.top() ; 
         bool rowCheck = false ; 
         int zeroCount = 0 ; 

         for(int i = 0 ; i < n ;i ++ ){
            if(M[candidate][i]==0){
                zeroCount++ ;
            }
         }

         if(zeroCount == n){
            return rowCheck = true ; 
         }
       
        bool colCheck = false ; 
        int oneCount = 0 ; 
        for(int i=0 ;i < n ;i ++ ){
            id(M[i][candidate]==1){
                oneCount++;
            }
        }
        if(oneCount==n-1){
            colCheck = true ; 
        }

        if(rowCheck == true && colCheck==true){
            return candidate ; 
        }else{
            return -1 ; 
        }





    }
};
int main()
{
return 0;
}