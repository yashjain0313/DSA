class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>in(n,0);
        vector<int>sus(n,false);
        for(auto i : invocations)
        {
            int a = i[0];
            int b = i[1];
            in[b]++;
            adj[a].push_back(b);
        }

        queue<int>q;
        q.push(k);
        sus[k]=1;

        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            for(int i : adj[c]){
                in[i]--;
                if(sus[i]!=true)
                {
                sus[i]=true;
                q.push(i);
                }
            }
        }

        bool make = false;

        vector<int>ans;
        for(int i =0;i<n;i++)
        {
            if(sus[i]&& in[i]>0){
                make=true;
                break;
            }
            if(sus[i] == false)
            {
                ans.push_back(i);
            }
        }
        if(make)
        {   vector<int>dc;
            for(int i =0;i<n;i++)
            {
                dc.push_back(i);
            }
        return dc;
        }
        
return ans ;

    }
};