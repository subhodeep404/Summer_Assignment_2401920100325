class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash;
        stack<int> st1;
        for(int n:nums2){
            while(!st1.empty() && st1.top()<n){
                hash[st1.top()]=n;
                st1.pop();
            }
            st1.push(n);
        }
        vector<int>ans;
        for(int n:nums1){
            ans.push_back(hash.count(n) ? hash[n]:-1);
        }
        return ans;
    }
};