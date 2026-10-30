// ═══════════════════════════════════════════════════════
// Problem: 4104. Shortest Path With At Most K Consecutive Identical Characters
// Difficulty: Medium
// Topics: String, Graph Theory, Heap (Priority Queue), Shortest Path
// Runtime: 201 ms (Beats 74.4%)
// Memory: 274.6 MB (Beats 74.9%)
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
        // 1. Build the adjacency list graph
        vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
        }

        // 2. Initialize distance array tracking [node][consecutive_count]
        // Since consecutive count can go up to k, the size is (k + 1)
        const int INF = 1e9;
        vector<vector<int>> dist(n, vector<int>(k + 1, INF));

        // 3. Min-Priority Queue tracking: {distance, node, consecutive_count}
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

        // Base case: Starting at node 0 has a consecutive sequence length of 1
        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto [current_dist, u, current_consecutive] = pq.top();
            pq.pop();

            // If we found a shorter path to this state already, skip it
            if (current_dist > dist[u][current_consecutive]) {
                continue;
            }

            // Early exit if we reached the target node
            if (u == n - 1) {
                return current_dist;
            }

            // Traverse adjacent neighbors
            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                // Calculate next consecutive streak length
                int next_consecutive = 1;
                if (labels[v] == labels[u]) {
                    next_consecutive = current_consecutive + 1;
                }

                // If the constraint is violated, this next state is invalid
                if (next_consecutive > k) {
                    continue;
                }

                // Relaxation step
                if (current_dist + weight < dist[v][next_consecutive]) {
                    dist[v][next_consecutive] = current_dist + weight;
                    pq.push({dist[v][next_consecutive], v, next_consecutive});
                }
            }
        }

        return -1; // If node n-1 is unreachable under the conditions
    }
};

