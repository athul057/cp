#include<bits/stdc++.h>
using namespace std;


class Graph {
private:
	int v;
	vector<list<int>>adj;

public:
	Graph(int v) {
		this->v = v;
		adj.resize(v);
	}

	void createGraph(int u, int v) {
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	void displayGraph() {
		cout << "Your graph is " << endl;
		for (int i = 0; i < v; i++) {
			cout << i << "->";
			for (auto k : adj[i]) {
				cout << k << " ";
			}
			cout << endl;
		}
	}
};

int main() {


	int n, m;
	cout << "Enter the number of vertices ";
	cin >> n;
	Graph g(n);
	cout << "Enter the number of edges ";
	cin >> m;

	for (int i = 0; i < m; i++) {
		cout << "enter the edges ";
		int u, v;
		cin >> u >> v;
		g.createGraph(u, v);
	}
	g.displayGraph();



}