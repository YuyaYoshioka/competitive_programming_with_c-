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

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int section_dp() {
  int N;

  // value in section
  vector< vector<long long> > c(N+1, vector<long long>(N+1));
  for (int i = 0; i < N+1; ++i) {
    for (int j = 0; j < N+1; ++j) {
      cin >> c[i][j]
    }
  }

  vector<long long> dp(N+1, INF);

  dp[0] = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      chmin(dp[i], dp[j] + c[j][i]);
    }
  }
}
