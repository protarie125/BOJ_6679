#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

void check(int x) {
	auto v10 = 0;
	auto y = x;
	while (0 < y) {
		v10 += y % 10;
		y /= 10;
	}

	auto v12 = 0;
	y = x;
	while (0 < y) {
		v12 += y % 12;
		y /= 12;
	}

	auto v16 = 0;
	y = x;
	while (0 < y) {
		v16 += y % 16;
		y /= 16;
	}

	if (v10 == v12 && v12 == v16) {
		cout << x << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	for (auto i = 1000; i < 10000; ++i) {
		check(i);
	}

	return 0;
}