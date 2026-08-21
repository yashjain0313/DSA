class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //slow fast pointer approach
        //first let slow and fast at 0
        // then keep moving till both met
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

//now find the entrance of the cycle 
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};