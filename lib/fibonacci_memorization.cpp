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

// フィボナッチ数列をメモ化を利用して再帰関数で解く

vector<long long> memo;

long long fibonacci_memorization(int N) {
  if (N == 0) return 0;
  if (N == 1) return 1;

  if (memo[N] != -1) return memo[N];

  return memo[N] = fibonacci_memorization(N - 1) + fibonacci_memorization(N - 2);
}
