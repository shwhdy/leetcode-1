#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <climits>
#include <utility>
#include <algorithm>
#include <cstring>
using namespace std;

template <typename T>
void INPUT_ARRAY(vector<T> &vs) {
  int n;
  cin >> n;
  T data;
  while(n--) {
    cin >> data;
    vs.push_back(data);
  }
}

template <typename T>
void PRINT_ARRAY(const vector<T> &vs) {
  bool first = true;
  for (const T &data : vs) {
    if (!first) cout << ", ";
    else first = false;
    cout << data;
  }
  cout << endl;
}
