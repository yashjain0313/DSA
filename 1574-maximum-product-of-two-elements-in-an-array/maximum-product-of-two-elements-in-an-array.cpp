class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1=0;
        int m2=0;
        for(auto i : nums)
        {
            if(i>m1){
                m2=m1;
                m1=i;
            }
            else if (i>m2)
            {
                m2=i;
            }
        }
        return (m2-1)*(m1-1);
        
    }
};