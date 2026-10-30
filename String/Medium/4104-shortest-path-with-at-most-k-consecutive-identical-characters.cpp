// ═══════════════════════════════════════════════════════
// Problem: 4104. Shortest Path With At Most K Consecutive Identical Characters
// Difficulty: Medium
// Topics: String, Graph Theory, Heap (Priority Queue), Shortest Path
// Runtime: 213 ms (Beats 66.9%)
// Memory: 274.4 MB (Beats 79.6%)
// Submitted: Oct 30, 2026
// Link: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
// ═══════════════════════════════════════════════════════

#include <vector>
#include <string>
#include <queue>
#include <tuple>

using namespace std;

class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
        }
        const int INF = 1e9;
        vector<vector<int>> dist(n, vector<int>(k + 1, INF));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto [current_dist, u, current_consecutive] = pq.top();
            pq.pop();
            if (current_dist > dist[u][current_consecutive]) {
                continue;
            }
            if (u == n - 1) {
                return current_dist;
            }
            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                int next_consecutive = 1;
                if (labels[v] == labels[u]) {
                    next_consecutive = current_consecutive + 1;
                }
                if (next_consecutive > k) {
                    continue;
                }
                if (current_dist + weight < dist[v][next_consecutive]) {
                    dist[v][next_consecutive] = current_dist + weight;
                    pq.push({dist[v][next_consecutive], v, next_consecutive});
                }
            }
        }

        return -1; 
    }
};

