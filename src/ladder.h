#include <iostream>
#include <fstream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void error(string word1, string word2, string msg);
bool edit_distance_within(const std::string& str1, const std::string& str2, int d);
bool is_adjacent(const string& word1, const string& word2);
vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list);
void load_words(set<string> & word_list, const string& file_name);
void print_word_ladder(const vector<string>& ladder);
void verify_word_ladder();
bool check_equal_size(const string& a, const string& b);
bool check_unequal_size(const string& shorter_str, const string& longer_str);
void process_candidate(const string& current_end, const string& candidate_word, vector<string>& current_path, set<string>& seen_words, queue<vector<string>>& ladder_queue, const string& end_word, vector<string>& result);
void bfs_ladder(const set<string>& word_list, queue<vector<string>>& ladder_queue, set<string>& seen_words, const string& end_word, vector<string>& result);
vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list);