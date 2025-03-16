#include <gtest/gtest.h>
#include "dijkstras.h"
#include "ladder.h"
#include <set>
#include <vector>
#include <string>
using namespace std;

TEST(lTest, CodeandDate) {
    set<string> w = {"code", "cade", "cate", "date", "data"};
    vector<string> l = generate_word_ladder("code", "data", w);
    vector<string> e = {"code", "cade", "cate", "date", "data"};
    EXPECT_EQ(l, e);
}

TEST(lTest, wonTowolf) {
    set<string> word_list;
    load_words(word_list, "words.txt"); 
    auto ladder = generate_word_ladder("won", "wolf", word_list);
    ASSERT_FALSE(ladder.empty()) << "No path found from won to wolf";
    EXPECT_EQ(ladder.front(), "won");
    EXPECT_EQ(ladder.back(), "wolf");
    EXPECT_LE(ladder.size(), 4);
    for (size_t i = 1; i < ladder.size(); i++) {
        EXPECT_TRUE(is_adjacent(ladder[i - 1], ladder[i])) << "Rev: " << ladder[i - 1] << " -> " << ladder[i];
    }
}


TEST(DijkstrasTest, testGraph) {
    Graph G;
    G.numVertices = 4;
    G.resize(4);
    G[1].push_back(Edge(1, 2, 1));
    G[1].push_back(Edge(1, 3, 4));
    G[2].push_back(Edge(2, 3, 1));
    G[0].push_back(Edge(0, 1, 2));
    G[0].push_back(Edge(0, 2, 5));
    vector<int> p;
    vector<int> d = dijkstra_shortest_path(G, 0, p);
    EXPECT_EQ(d[2], 3);
    EXPECT_EQ(d[3], 4);
    EXPECT_EQ(d[0], 0);
    EXPECT_EQ(d[1], 2);
}

TEST(DijkstrasTest, ExtractPath) {
    Graph G;
    G.numVertices = 4;
    G.resize(4);
    G[1].push_back(Edge(1, 2, 1));
    G[1].push_back(Edge(1, 3, 4));
    G[2].push_back(Edge(2, 3, 1));
    G[0].push_back(Edge(0, 1, 2));
    G[0].push_back(Edge(0, 2, 5));
    vector<int> p;
    vector<int> d = dijkstra_shortest_path(G, 0, p);
    vector<int> loc = extract_shortest_path(d, p, 3);
    vector<int> e = {0, 1, 2, 3};
    EXPECT_EQ(loc, e);
}
