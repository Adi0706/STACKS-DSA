#include<iostream>
using namespace std;

class TwoStack {
public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s) {
        arr = new int[s];
        this->size = s;
        top1 = -1; // stack 1 implementation from left to right
        top2 = s;  // stack 2 implementation from right to left
    }

    void push1(int num) {
        // check if there is space available in the array
        if ((top2 - top1) > 1) {
            top1++;
            arr[top1] = num;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }

    void push2(int num) {
        // check if there is space available in the array
        if ((top2 - top1) > 1) {
            top2--;
            arr[top2] = num;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else {
            cout << "Stack underflow" << endl;
        }
    }

    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++; // because top2 is going in the opposite direction.
            return ans;
        }
        else {
            cout << "Stack underflow" << endl;
        }
    }
};

int main() {
    TwoStack s(7);
    s.push1(1);
    s.push2(2);

    return 0;
}
