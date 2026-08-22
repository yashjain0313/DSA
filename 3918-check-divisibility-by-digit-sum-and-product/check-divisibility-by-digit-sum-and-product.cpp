class Solution {
public:
    bool checkDivisibility(int na) {
        int sum=0;
        int mul=1;
        int n = na;
        while(n>0)
        {   int a = n%10;
            sum+=a;
            mul*=a;
            n/=10;
        }
        // cout<<sum<<" "<<mul;
        if (na%(sum+mul)==0)
        {
            return true;
        }
        return false;
    }
};