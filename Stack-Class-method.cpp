#include <iostream>
using namespace std;
// using array method
class stack
{
    // data members
public:
    int *arr;
    int top;
    int size;

    // properties
    //TC--O(1)
    stack(int size) //--> constructor
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1) // empty space available

        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()//top most element
    {
        if (top >= 0){
            return arr[top];
    }
    else
    {
        cout << "stack is empty" << endl;
        return -1;
    }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

 int main()
{
    stack s(5); // stack size 5
    s.push(7);
    s.push(5);
    s.push(7);
    s.push(5);

    //peek 
    cout<<"top element is : " <<s.peek();
    s.pop();

//peek 
    cout<<"top element is : " <<s.peek();
    return 0;
}