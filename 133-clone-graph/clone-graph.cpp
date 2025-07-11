// Map each node against clone 
// iterate all neighbors 
// if already cloned push it in the vector else call clone() for the new node

class Solution {
    Node* clone(Node* node, unordered_map <Node*, Node*> &mp){
        mp[node] = new Node(node->val); 
        for(Node* n: node->neighbors){
            if(mp.find(n) == mp.end()) mp[n] = clone(n, mp);
            mp[node]->neighbors.push_back(mp[n]);
        }
        return mp[node];
    }

public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        unordered_map <Node*, Node*> mp;
        return clone(node, mp);
    }
};