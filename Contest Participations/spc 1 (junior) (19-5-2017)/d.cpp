#include <bits/stdc++.h>
using namespace std;

template <class T>
struct dijkstra {
    int dest;
    int n;
    vector<vector<pair<int, T> > > adj;
    vector<T> dist, danger, mindanger;
    vector<int> parent;

    dijkstra(int n): n(n+1), adj(n+1), danger(n+1){} //dist and parent will be initialized during calculation

    void addEdge(int a, int b, T w) {
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    void findShortestPath(int src, T mx) {
        priority_queue<pair<T,int>, vector<pair<T, int> >, greater<pair<T, int> > > q;
        dist = vector<T>(n, numeric_limits<T>::max());

        parent = vector<int>(n, -1);
        dist[src]=0;
        q.push({0, src});

        while(!q.empty()) {
            int u  = q.top().second;
            q.pop();
            if(u==dest) break;
            //T d = q.top().first;

            for(auto edge: adj[u]) {
                int v= edge.first;
                T d = edge.second;

                if(danger[v]<=mx) {
                    if(dist[v]-d > dist[u]) {
                            dist[v]=d+dist[u];
                            parent[v]=u;
                            q.push({dist[v], v});
                    }
                }
            }
        }
    }

    T shortest_distance(int node) {
        return dist[node];
    }

    vector<int> shortest_path(int node) {
        vector<int> res;
        while(node!=-1) {
            res.push_back(node);
            node=parent[node];
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {

    return 0;
}
