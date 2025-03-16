#include "dijkstras.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    Graph G;
    std::string inputFile = "src/small.txt";
    if (argc > 1) {
        inputFile = argv[1];}
    file_to_graph(inputFile, G); vector<int> p(G.numVertices, -1); vector<int> lg = dijkstra_shortest_path(G, 0, p);
    for (int i = 0; i < G.numVertices; i++) {
        vector<int> routelist = extract_shortest_path(lg, p, i);
        if (!routelist.empty()) { print_path(routelist, lg[i]); }}
    return 0;
}