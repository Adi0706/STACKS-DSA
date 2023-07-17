#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //using STL
    stack<int> s ; 

    //push operation
    s.push(7) ; 
    s.push(5) ; 

    // pop operation
    // top element print 

    cout <<"top element :"<< s.top()<<endl;

    if(s.empty()){
        cout<<"empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }

    cout<<"stack size:"<<s.size()<<endl;

return 0;
}