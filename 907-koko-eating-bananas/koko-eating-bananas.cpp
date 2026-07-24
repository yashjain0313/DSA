class Solution {
public:
bool check (vector<int>& s,int mid,int k)
{
    int ans =0;
    for(int i : s)
    {
        ans+=ceil((double)i/mid);
        if(ans>k) return false;
    }
    return true;
}
    int minEatingSpeed(vector<int>& s, int k) {
    int l=1;
    int h = *max_element(s.begin(),s.end());
    int ans =0;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(check(s,mid,k))
        {
            ans = mid;
            h = mid - 1;
        }
        else{
            l=mid+1;
        }
    }

return ans;
     
    }
};