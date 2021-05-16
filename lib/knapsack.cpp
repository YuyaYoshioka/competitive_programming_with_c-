#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
using namespace std;
const long long INF = 1LL << 60;



template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int knapsack() {
  int N; // number of item
  long long W; // maximum weight

  vector<long long> weight(N), value(N);
  
  vector< vector<long long> > dp(N + 1, vector<long long>(W + 1, 0));

  for (int i = 0; i < N; ++i) {
    for (int w = 0; w <= W; ++w) {
      if (w - weight[i] >= 0) {
        chmax(dp[i+1][w], dp[i][w - weight[i]] + value[i]);
      }

      chmax(dp[i+1][w], dp[i][w]);
    }
  }
}
