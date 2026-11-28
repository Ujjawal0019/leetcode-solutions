void dfs(int start, vector<vector<int>>& adj, vector<int>& vis) {

    vis[start] = 1;

    for (int neigh = 0; neigh < adj.size(); neigh++) {
        if (adj[start][neigh] == 1 && vis[neigh] == 0) {
            dfs(neigh, adj, vis);
        }
    }
}

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<int> vis(n, 0);

        int count = 0;
        for (int i = 0; i < n; i++) {

            if (vis[i] == 0) {
                dfs(i, isConnected, vis);
                count++;
            }
        }
        return count;   
    }
};