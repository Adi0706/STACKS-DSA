#include <iostream>
#include<stack>
#include<vector>
#include<cmath>
using namespace std;
 
int main() {
    stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
    //storing in a vector for operating ...
    vector<char>v;
    while(!st.empty()){
      v.push_back(st.top());
      st.pop();
    }

    int n=v.size();
    if(n%2==0){//even
      int target=(n/2);
      for(int i=0;i<n;i++){
        if(i==target)continue; // skip the element which is at target and push the rest elements back into the stack. 
        st.push(v[i]);
      }
    }else{
      int target=ceil(n/2);//odd---> upper value  (n/2) + 1 ?
      for(int i=0;i<n;i++){
        if(i==target)continue;
        st.push(v[i]);
      }
    }
    cout<<"Printing stack after deletion of middle: ";
    while (!st.empty()) {
        char p = st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
