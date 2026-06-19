class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        deque<int>dq1;
        for(int i=0;i<nums.size();i++){
            if(!dq1.empty() && dq1.front()<=i-k){
                dq1.pop_front();
            }
            while(!dq1.empty() && nums[dq1.back()]<=nums[i]){
                dq1.pop_back();
            }
            dq1.push_back(i);
            if(i>=k-1){
                res.push_back(nums[dq1.front()]);
            }
        }
        return res;
    }
};