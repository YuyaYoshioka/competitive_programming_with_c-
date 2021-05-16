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

vector<int> Queue(100);
int SetIndex = 0;
int GetIndex = 0;

void Push(int Data) {
  Queue[SetIndex] = Data;
  if (SetIndex == Queue.size() - 1) SetIndex = 0;
  else ++SetIndex;
}

int Pop() {
  if (GetIndex == Queue.size() -1) GetIndex = 0;
  else ++GetIndex;
  return Queue[GetIndex-1];
}
