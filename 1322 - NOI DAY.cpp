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

int main(){
    //FileIO();
    FastIO;
	TC(){
		int n; cin >> n;
		int a[n];
		priority_queue <ll, vector<ll>, greater<ll>> pq;
		for (int i = 0; i < n; i++) cin >> a[i], pq.push(a[i]);
		ll ans = 0;
		while (pq.size() > 1){
			ll first = pq.top(); pq.pop();
			ll sec = pq.top(); pq.pop();
			ans += first + sec;
			pq.push(first + sec);
		}
		cout << ans; el;
	}
    return 0;
}

