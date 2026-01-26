class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();

        for(int i = 0; i < n; i++)
        {
            int f = target - num[i];
            int l = i + 1;
            int r = n - 1;
            while(l <= r)
            {
                int mid = l + (r - l) / 2;
                if(num[mid] == f)
                {
                    return {i + 1, mid + 1}; 
                }
                if(num[mid] < f){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }

        return {}; 
    }
};
