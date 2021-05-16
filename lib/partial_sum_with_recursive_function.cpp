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

// 部分和がある値と一致するか再帰関数でbool値を返す

// bool partial_sum_with_recursive_function(vector<int> N, int W) {
//   if (N.size() == 0 && W == 0) return true;
//   else return false;

//   int last_value = N[-1];
//   N.pop_back();

//   bool output_value = partial_sum_with_recursive_function(N, W) | partial_sum_with_recursive_function(N, W-last_value);
// }

bool partial_sum_with_recursive_function(int i, int W, const vector<int> &a) {
  if (i == 0) {
    if ( W ==0) return true;
    else return false;
  }

  if (partial_sum_with_recursive_function(i-1, W, a)) return true;

  if (partial_sum_with_recursive_function(i-1, W - a[i], a)) return true;

  return false;
}

vector<int> memo;
