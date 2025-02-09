#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int v; // Number of vertices
    vector<vector<int>> adj; // Adjacency list using vector

public:
    Graph(int v) {
        this->v = v;
        adj.resize(v);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    void displayGraph() {
        for (int i = 0; i < v; i++) {
            cout << i << "->";
            for (auto neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};