#include <iostream>
using namespace std;
//node 
struct Node
{
    int val;
    Node *next;
};

class Stack
{
public:
    Node *head;
    int stacksize;

    Stack()
    {
        head = NULL;
        stacksize = 0;
    }

    void push(int g)
    {
        Node *temp = new Node(); // new node created
        temp->val = g;
        temp->next = head;
        head = temp;

        cout << "Element " << g << "pushed in to the stack" << endl;
        stacksize++; // incrementing the stack size
    }

    void pop()
    {
        // if stack is empty-->head = null
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return;
        }

        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        cout << "element popped" << endl;
        stacksize--; // decreasing the stack size
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        cout << "top element is" << head->val;
        return head->val;
    }
    int size()
    {
        if (stacksize == 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        else
        {
            cout << "the size of the stack is " << endl;
            return stacksize;
        }
    }
    int Empty()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return 1;
        }
        cout << "stack is not empty" << endl;
        return 0;
    }
    void showElements()
    {
        cout << "Stack elements are :";
        while (head != NULL)
        {

            cout << head->val << " ";
            head = head->next;
        }
    }
};
int main()
{

    Stack s;

    s.Empty();

    s.push(4);
    s.push(7);
    s.push(9);
    s.push(5);

    s.showElements();

    return 0;
}