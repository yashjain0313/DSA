class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int mx = 0;

vector<int>arr(256,-1);
while(r<n)
{ int sum =0;
    if(arr[s[r]]!= -1)
    {
        if(arr[s[r]] >=l )
        {
            l = arr[s[r]]+1;
        }

    }
    sum = r-l+1;
    arr[s[r]] = r;
    mx= max(sum,mx);
   r++;

}

return mx;



    }
};
