class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int m = 1;
       int s = nums[0];
 cout<<s<<endl;
       for(int i =1 ; i<nums.size();i++)
       {
        if(nums[i]==s) {
            
            m++;
        }
//boyer moore 
        else{
            m--;
            if(m==0)
            {
                m=1;
                s=nums[i];
            }
            }

            cout<<s<<endl;
       }

       return s;
    }
};