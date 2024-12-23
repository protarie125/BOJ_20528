#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  char x = 0;
  while (0 < (N--)) {
    string s;
    cin >> s;

    if (x == 0)
      x = s[0];
    else {
      if (x != s[0]) {
        cout << 0;
        return 0;
      }
    }
  }

  cout << 1;

  return 0;
}