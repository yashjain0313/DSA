class Solution {
public:
   int singleNumber(vector<int>& nums) {
    int ans = 0;

// loop for each bit 
    for (int bit = 0; bit < 32; bit++) {
        int count = 0;

        for (int num : nums) {
            //each number store ith bit count 
            if ((num >> bit) & 1)
                count++;
        }
        //count >0 after removing triplets so 
        if (count % 3)
         {  ans |= (1 << bit);}

         // actually setting the ith bit of the number which is single 

         // or is used to change the particular bit only 
         // using bits here depth **
    }

    return ans;
}
};