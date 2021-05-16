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

// calculate the cost to make the same string
int edit_distance() {
  string S, T;

  int len_S = S.size();
  int len_T = T.size();

  vector< vector<int> > dp(len_S+1, vector<int>(len_T+1, INF));

  dp[0][0] = 0;

  for (int i = 0; i <= len_S; ++i) {
    for (int j = 0; j <= len_T; ++j) {
      // change operation
      if (i > 0 && j > 0) {
        if (S[i-1] == T[j-1]) {
          chmin(dp[i][j], dp[i-1][j-1]);
        }
        else {
          chmin(dp[i][j], dp[i-1][j-1] + 1);
        }
      }

      // delete operation
      if (i > 0) chmin(dp[i][j], dp[i-1][j] + 1);

      // insert operation
      if (j > 0) chmin(dp[i][j], dp[i][j-1] + 1);
    }
  }
}