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

bool prime(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
    //FileIO();
    FastIO;
	TC(){
		ll l, r; cin >> l >> r;
		int cnt = 0;
		for (int i = l; i <= sqrt(r); i++){
			if (prime(i)) cnt++;
		}
		cout << cnt; el;
	}
    return 0;
}

