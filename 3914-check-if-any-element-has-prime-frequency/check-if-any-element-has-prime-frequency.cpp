class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {

        map<int,int>mp;
  for(int num:nums)
  {
mp[num]++;
  }

    for (const auto& entry : mp)
  {
       bool ans = false;
        ans=isPrime(entry.second);

    if(ans)
    { return true;
        break;
    }
      
  }

        
return false;
        
    }
private:
    bool isPrime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}
};