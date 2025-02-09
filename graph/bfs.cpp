#include<vector>
#include<unordered_map>
#include<queue>
#include<map>
#include<list>


void bfs(map<int, list<int>>&mp, map<int, bool>&visited, int i, vector<int>&ans) {
    queue<int>q;

    q.push(i);
    visited[i] = true;
    while (!q.empty()) {
        int front = q.front();
        ans.push_back(front);
        q.pop();
        for (auto i : mp[front]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }


        }

    }

}
void print(map<int, list<int>>&mp) {
    for (auto m : mp) {
        cout << m.first << "->";
        for (auto j : m.second) {
            cout << j << " ";
        }
        cout << endl;

    }
}

void prepareAdjList(map<int, list<int>>&adj, vector<vector<int>> &vec) {

    for (int i = 0; i < vec.size(); i++) {
        int u = vec[i][0];
        int v = vec[i][1];
        adj[u].push_back(v);
    }
}


vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    // Write your code here.

    map<int, list<int>>mp;
    map<int, bool>visited;
    vector<int>ans;
    prepareAdjList(mp, adj);
    print(mp);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(mp, visited, i, ans);
        }
    }

    return ans;

}