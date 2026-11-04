class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
         int l =0;
         int r = n-1;
         while(l<r)
         {
            // if(numbers[r]>target){
            //     r--;
            // }
            if(numbers[r]+numbers[l]==target) return {l+1,r+1};
            else if (numbers[r]+numbers[l]>target) r--;
            else l++;
         }
         return {l+1,r+1};
    }
};