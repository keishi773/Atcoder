#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
#include <cmath>
#include <limits>
#include<iomanip>
#include<typeinfo>
#include<queue>
#include<map>
//�\���ɑ傫�Ȓl
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using Pint = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;


//�ő���񐔂����߂�
ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return (b);
	}
	else {
		return(gcd(b, a % b));
	}
}

//�ŏ����{�������߂�
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

// n�̖񐔂����߂�
vector<long long> divisor(long long n) {
	vector<long long> ret;
	for (long long i = 1; i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(n / i);
		}
	}
	return ret;
}

// �㉺���E�ւ̈ړ��z��
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

// x�̌��������߂�B
unsigned GetDigit(unsigned num) {
	return to_string(num).length();
}

ll mod = 1e9 + 7;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	int apos = 0;
	// A�̈ʒu��T��
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			apos = i;
			break;
		}
	}
	// ��납��z��T��
	int zpos = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == 'Z') {
			zpos = i;
			break;
		}
	}
	cout << zpos - apos + 1 << endl;
}