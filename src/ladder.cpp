#include "ladder.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <queue>
#include <set>
using namespace std;

#define my_assert(e) { cout << #e << ((e) ? " passed" : " failed") << endl; }

bool check_equal_size(const string& a, const string& b) {
    int sub_count = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) sub_count++;
        if (sub_count > 1) return false;}
    return sub_count == 1;}

bool check_unequal_size(const string& shorter_str, const string& longer_str) {
    size_t i_shorter = 0, i_longer = 0; int ins_count = 0;
    while (i_shorter < shorter_str.size() && i_longer < longer_str.size()) {
        if (shorter_str[i_shorter] != longer_str[i_longer]) { ins_count++; i_longer++; }
        else {i_shorter++; i_longer++;}}
    return (ins_count + (longer_str.size() - i_longer)) == 1;}

bool edit_distance_within(const string& a, const string& b, int d) {
    if (abs(static_cast<int>(a.size()) - static_cast<int>(b.size())) > d) return false;
    if (a.size() == b.size()) return check_equal_size(a, b);
    const string& shorter_str = (a.size() < b.size()) ? a : b; const string& longer_str = (a.size() < b.size()) ? b : a;
    return check_unequal_size(shorter_str, longer_str);
}

bool is_adjacent(const string& word1, const string& word2) {
    return edit_distance_within(word1, word2, 1);
}

void process_candidate(const string& current_end, const string& candidate_word, vector<string>& current_path, set<string>& seen_words, queue<vector<string>>& ladder_queue, const string& end_word, vector<string>& result) {
    if (is_adjacent(current_end, candidate_word) && seen_words.find(candidate_word) == seen_words.end()) {
        seen_words.insert(candidate_word); auto extended_path = current_path;
        extended_path.push_back(candidate_word);
        if (candidate_word == end_word) result = extended_path;
        else ladder_queue.push(extended_path);}}

void bfs_ladder(const set<string>& word_list, queue<vector<string>>& ladder_queue, set<string>& seen_words, const string& end_word, vector<string>& result) {
    while (!ladder_queue.empty() && result.empty()) {
        auto current_path = ladder_queue.front(); ladder_queue.pop();
        auto current_end = current_path.back();
        for (const auto& candidate_word : word_list)
            process_candidate(current_end, candidate_word, current_path, seen_words, ladder_queue, end_word, result);}}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    if (begin_word == end_word) return vector<string>();
    if (word_list.find(end_word) == word_list.end()) return vector<string>();
    queue<vector<string>> ladder_queue; ladder_queue.push({begin_word});set<string> seen_words = {begin_word}; vector<string> result;
    bfs_ladder(word_list, ladder_queue, seen_words, end_word, result);
    return result.empty() ? vector<string>() : result;}

void load_words(set<string> &word_list, const string& file_name) {
    ifstream inpFile(file_name);
    if (!inpFile) { cerr << "There is a error: " << file_name << endl; return; }
    string word_read;
    while (inpFile >> word_read) { for (auto &ch : word_read) ch = tolower((unsigned char)ch); word_list.insert(word_read); }
}

void print_word_ladder(const vector<string>& ladder) {
    for (size_t i = 0; i < ladder.size(); i++) {
        cout << ladder[i];
        if (i + 1 < ladder.size()) cout << " -> ";}
        cout << endl;
}

void error(string word1, string word2, string msg) {
    cout <<"There is a issue "<< word1 << " and " << word2;
    cout << " " << msg << endl;
}

void verify_word_ladder() {
    set<string> word_list; load_words(word_list, "words.txt");
    my_assert(generate_word_ladder("cat", "dog", word_list).size() == 4);
    my_assert(generate_word_ladder("marty", "curls", word_list).size() == 6);
    my_assert(generate_word_ladder("code", "data", word_list).size() == 6); my_assert(generate_word_ladder("work", "play", word_list).size() == 6);
    my_assert(generate_word_ladder("sleep", "awake", word_list).size() == 8); my_assert(generate_word_ladder("car", "cheat", word_list).size() == 4);}