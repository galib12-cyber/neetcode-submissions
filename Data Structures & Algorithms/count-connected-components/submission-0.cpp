class Solution {
   public:
    vector<int> adj[1005];
    int vis[1010] = {};
    void dfs(int node) {
        vis[node] = 1;

        for (int x : adj[node]) {
            if (vis[x] == 0) {
                dfs(x);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                dfs(i);
                cnt++;
            }
        }

        return cnt;
    }
};
