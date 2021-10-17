#include<bits/stdc++.h>
using namespace std;

class PriorityQueue {
  vector<int> data;
  int size;
public:
  PriorityQueue() {
    size = 0;
  }
  void insert(int n) {
    data.push_back(n);
    size++;
    int i = size - 1;
    while (i > 0 && data[i] < data[(i - 1) / 2]) {
      swap(data[i], data[(i - 1) / 2]);
      i = (i - 1) / 2;
    }
  }
  int remove() {
    if (size == 0) {
      return -1;
    }
    int result = data[0];
    data[0] = data[size - 1];
    size--;
    int i = 0;
    while (2 * i + 1 < size) {
      int j = 2 * i + 1;
      if (j + 1 < size && data[j] > data[j + 1]) {
        j++;
      }
      if (data[i] < data[j]) {
        swap(data[i], data[j]);
        i = j;
      }
      else {
        break;
      }
    }
    return result;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Write your code

  return 0;
}