
#include<iostream>
#include<stack>

class MyQueue {
public:
stack<int> input,output ; // 2 stacks 
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x) ; // push all the elements in input stack
        
    }
    
    int pop() {
        int val = peek() ; // as per queue--> top element of output stack will be front element of queue and first element of input stack
        output.pop() ; // popping the top element and return ing it 
        return val ; 
        
    }
    
    int peek() {

        if(output.empty()){//if the output stack is empty
            while(!input.empty()){ // push all the input elements in the output elements while the input is not getting empty
                output.push(input.top());
                input.pop();
            }
        }
        return output.top() ; //top element of the output stack
    }
    
    bool empty() {
        return input.empty() && output.empty() ; // return if input and output are empty--> means the queue is empty.
        
    }
};