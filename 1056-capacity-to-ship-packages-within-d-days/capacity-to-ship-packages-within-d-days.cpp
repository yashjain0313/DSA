class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int l = *max_element(weights.begin(),weights.end());
        int h = accumulate(weights.begin(),weights.end(),0);

        while(l<=h)
        {
            int mid = (l+h)/2;
            int ans = find(weights,mid);
            if(ans<= days)
            {
                h = mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return l;
    }
private:
    int find(vector<int>& weights , int maxC)
    {
        int days = 1;
        int capacity = 0;

        for(int i =0;i<weights.size();i++)
        {
            if(capacity + weights[i] > maxC)
            {
                 days++;
                capacity = weights[i];
            }
            else{
               capacity += weights[i];
            }
        }

        return days ;

    }    

};