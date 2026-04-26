// Find the question here
// https://www.geeksforgeeks.org/problems/common-elements1132/1

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
  int i = 0, j = 0, k = 0;
  vector<int> x;
  while (i < a.size() && j < b.size() && k < c.size()) {
    if (a[i] == b[j] && b[j] == c[k]) {
      if (x.empty() || x.back() != a[i]) {
        x.push_back(a[i]);
      }
      i++;
      j++;
      k++;
    } else {
      int max_val = max({a[i], b[j], c[k]});
      if (a[i] < max_val)
        i++;
      if (b[j] < max_val)
        j++;
      if (c[k] < max_val)
        k++;
    }
  }
  return x;
}

int main() {
  vector<int> x = {1, 2, 3, 4, 5};
  vector<int> y = {1, 3, 5, 7, 9};
  vector<int> z = {1, 2, 3, 6, 8};

  cout << "Common number in 3 Array are: ";
  vector<int> result = commonElements(x, y, z);
  for (int num : result) {
    cout << num << " ";
  }

  return 0;
}
