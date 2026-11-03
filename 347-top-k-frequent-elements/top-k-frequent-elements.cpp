class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(k--)
        {   pair<int,int>p=pq.top();
            ans.push_back(p.second);
            pq.pop();
        }

        return ans;
    }
};