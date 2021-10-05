#include<bits/stdc++.h>
using namespace std;

struct Trie {
  bool isEnd;
  vector<Trie*> children;
  int count;
  Trie() {
    children.assign(26, nullptr);
    isEnd = false;
    count = 0;
  }
};

Trie* root;

void insert(const string& s) {
  Trie* curr = root;
  for (char c : s) {
    int index = c - 'a';
    if (curr->children[index] == nullptr) {
      curr->children[index] = new Trie();
      curr->count += 1;
    }

    curr = curr->children[index];
  }

  curr->isEnd = true;
}

string longestCommonPrefix(vector<string>& strs) {
  root = new Trie();

  for (const string& s : strs) {
    if (s.empty()) return "";
    insert(s);
  }

  string res;

  Trie* curr = root;

  while (curr->count == 1) {
    int i;
    for (i = 0; i < 26; i++) {
      if (curr->children[i]) {
        res += i + 'a';
        break;
      }
    }
    curr = curr->children[i];
    if (curr->isEnd) break;
  }

  return res;
}