#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    map<int, vector<int>> adj; // Adjacency map using map

public:
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    void displayGraph() {
        for (auto &entry : adj) {
            cout << entry.first << "->";
            for (auto neighbor : entry.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};