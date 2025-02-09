#include<bits/stdc++.h>
#define ll long long
using namespace std;

class graph {
public:
	unordered_map<int, list<int>>adj;
	void addEdge(int u, int v, bool direction) {

		// creating an edge from u -> v
		adj[u].push_back(v);

		//IF UNDIRECTED GRAPH....
		if (direction) {
			adj[v].push_back(u);
		}
	}

	void printGraph() {

		for (auto i : adj) {
			cout << i.first << "->";
			for (auto j : i.second) {
				cout << j << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	ll n, m;
	cout << "Input number of nodes" << endl;
	cin >> n;
	cout << "Input number of Edges" << endl;
	cin >> m;

	graph g;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		//creating undirected graph
		g.addEdge(u, v, true);

	}
	//printing graph..
	g.printGraph();


}