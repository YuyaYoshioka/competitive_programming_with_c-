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

// bit全探索

int bit_binary_search() {
  int N;
  cin >> N;
  vector<int> input_list(N);

  vector< vector<int> > output_list(N);

  for (int bit = 0; bit < (1 << N); ++bit) {
    for (int i = 0; i < N; ++i) {
      if (bit & (1 << i)) {
        cout << i << endl;
      }
    }
  }
}