#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

ll dp[55]; int n;

void init(){
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for (int i = 4; i <= 50; ++i) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

int main(){
    //FileIO();
    FastIO;
    init();
	TC(){
		cin >> n;
		cout << dp[n]; el;
	}
    return 0;
}

