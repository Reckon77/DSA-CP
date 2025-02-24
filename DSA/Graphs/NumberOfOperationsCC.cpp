//https://leetcode.com/problems/number-of-operations-to-make-network-connected/
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        // If there are fewer cables than (n-1), it's impossible
        if (connections.size() < n - 1) return -1;
        
        DisjointSet ds(n);
        int extraCables = 0; // Count of redundant connections
        
        for (auto& e : connections) {
            int u = e[0];
            int v = e[1];
            
            if (ds.findUPar(u) != ds.findUPar(v)) {
                ds.unionByRank(u, v); // Connect components
            } else {
                extraCables++; // This cable is redundant
            }
        }

        // Count number of connected components
        int components = 0;
        for (int i = 0; i < n; i++) {
            if (ds.findUPar(i) == i) { // Count unique parents
                components++;
            }
        }

        // We need (components - 1) cables to connect them
        return (extraCables >= (components - 1)) ? (components - 1) : -1;
    }
    class DisjointSet {
    vector<int> rank, parent;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
};