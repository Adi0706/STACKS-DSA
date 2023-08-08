#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    unordered_map<int,int> umap ; 
    stack<int> s ; // for storing the max element and chcking the max element 
    int n = nums2.size() ; 


    //starting from the back --> assuming the last element has no greater element 
    for(int i = n-1;i>=0;i++)
    {
        int element = nums2[i] ; 
        while(!s.empty()&&s.top()<=element)
        {
            s.pop() ; 
        }
        int res = s.empty() ? -1 : s.top() ; 
        umap.insert({element,res}) ; 
        s.push(element) ; 
    }
    vector<int> ans ; 
    for(auto j : nums1 ){
        ans.push_back(umap[j]) ; 
    }


    return ans ;

}
int main()
{
return 0;
}