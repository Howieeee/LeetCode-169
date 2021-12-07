class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int,int>um;
        for(auto n:nums)
            um[n]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto n:um)
            pq.push({n.second,n.first});
        
        return pq.top().second;
    }
};
