#include<bits/stdc++.h>
using namespace std;
// Considering only small alphabets

class TrieNode {
public:
  TrieNode* children[26];
  bool endOfWord;
  int count;

  TrieNode() {
    count = 0;
    endOfWord = false;

    for (int i = 0; i < 26; i++) 
      children[i] = nullptr;
  }
};

void insert(TrieNode* root, string& word) {

  for (char c : word) {
    int index = c - 'a';

    if (root->children[index] == nullptr) {
      root->children[index] = new TrieNode();
    }
    root->count += 1;
    root = root->children[index];
  }

  root->endOfWord = true;
}

bool check(TrieNode* root, string& word) {

  for (char c : word) {
    int index = c - 'a';

    if (root->children[index] == nullptr) return false;

    root = root->children[index];
  }

  return root->endOfWord == true;
}

int countPrefix(TrieNode* root, string& prefix) {
  for (char c : prefix) {
    int index = c - 'a';

    if (root->children[index] == nullptr) return 0;

    root = root->children[index];
  }

  return root->count;
}

int main() {
  vector<string> words = { "apple", "banana", "ban", "ball" };
  TrieNode* root = new TrieNode();
  for (auto& word : words) insert(root, word);

  while (1) {
    string word; cin >> word;
    cout << countPrefix(root, word) << endl;
  }
  // ba -> banana, ball, ban -> 3
}