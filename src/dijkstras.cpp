#include "dijkstras.h"
#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void update_neighbor(const Graph& G, int currnode, int neighbor, int linkcost, vector<int>& distance, vector<int>& previous, priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>& nodeheap) {
    if (distance[currnode] != INF && distance[currnode] + linkcost < distance[neighbor]) {
        distance[neighbor] = distance[currnode] + linkcost;
        previous[neighbor] = currnode;
        nodeheap.push({distance[neighbor], neighbor});
    }
}

void process_node(const Graph& G, vector<bool>& seenflags, vector<int>& distance, vector<int>& previous, priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>& nodeheap) {
    auto nextpair = nodeheap.top(); nodeheap.pop(); int currnode = nextpair.second;
    if (!seenflags[currnode]) {
        seenflags[currnode] = true;
        for (auto &link : G[currnode])
            update_neighbor(G, currnode, link.dst, link.weight, distance, previous, nodeheap);}}

vector<int> dijkstra_shortest_path(const Graph& G, int source, vector<int>& previous) {
    vector<int> distance(G.numVertices, INF); vector<bool> seenflags(G.numVertices, false); previous.assign(G.numVertices, -1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> nodeheap;
    distance[source] = 0; nodeheap.push({0, source});
    while (!nodeheap.empty()) process_node(G, seenflags, distance, previous, nodeheap);
    return distance;}

vector<int> extract_shortest_path(const vector<int>& distance, const vector<int>& previous, int destination) {
    vector<int> trailvec;
    if (distance[destination] == INF) return trailvec;
    for (int tracept = destination; tracept != -1; tracept = previous[tracept]) trailvec.push_back(tracept);
    reverse(trailvec.begin(), trailvec.end());
    return trailvec;}

void print_path(const vector<int>& v, int total) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << " ";}
    cout << "\nTotal cost is " << total << endl;
}
