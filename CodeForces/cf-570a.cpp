#include <iostream>
#include <iomanip>
#include <vector>	       
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <functional>
#include <string>
#include <string.h>  // Include for memset!
#include <complex>
#include <random>
#define _USE_MATH_DEFINES
#include <math.h>

const int INF = 2000000000;	                 // 9
const long long LLINF = 9000000000000000000LL;  // 18
const long double LDINF = 1e300;

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<bool> vb;
typedef long long ll;
typedef long double ld;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	vi cwins(n, 0);
	for (int i = 0; i < m; ++i) {
		int id = -1; ll votes = -1;
		for (int j = 0; j < n; ++j) {
			ll x; cin >> x;
			if (x > votes) { votes = x; id = j; }
		}
		cwins[id]++;
	}
	int wid = -1, wins = -1;
	for (int i = 0; i < n; ++i) {
		if (cwins[i] > wins) { wins = cwins[i]; wid = i; }
	}
	cout << (wid + 1) << endl;
	
	return 0;
}
