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
#define maxn 101

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

char arr[maxn][maxn];
int n, a, b, c, d;
bool visited[maxn][maxn];
int dp[maxn][maxn];

int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};

int bfs(int u, int v){
	queue <pair<int, int>> q;
	q.push({u, v});
	dp[u][v] = 0;
	visited[u][v] = true;
	while (!q.empty()){
		pair<int, int> top = q.front();
		q.pop();
		int i = top.fi, j = top.se;
		// cout << i << ' ' << j << '\n';
		if (i == c && j == d) return dp[i][j];
		int i1 = i + 1;
		while (i1 < n){
			if (arr[i1][j] == '.' && !visited[i1][j]){
				visited[i1][j] = true;
				dp[i1][j] = dp[i][j] + 1;
				q.push({i1, j});
			}
			else break;
			i1++;
		}
		i1 = i - 1;
		while (i1 >= 0){
			if (arr[i1][j] == '.' && !visited[i1][j]){
				visited[i1][j] = true;
				dp[i1][j] = dp[i][j] + 1;
				q.push({i1, j});
			}
			else break;
			i1--;
		}
		int j1 = j + 1;
		while (j1 < n){
			if (arr[i][j1] == '.' && !visited[i][j1]){
				visited[i][j1] = true;
				dp[i][j1] = dp[i][j] + 1;
				q.push({i, j1});
			}
			else break;
			j1++;
		}
		j1 = j - 1;
		while (j1 >= 0){
			if (arr[i][j1] == '.' && !visited[i][j1]){
				visited[i][j1] = true;
				dp[i][j1] = dp[i][j] + 1;
				q.push({i, j1});
			}
			else break;
			j1--;
		}
		// if (i + 1 < n && arr[i + 1][j] == '.' && !visited[i + 1][j]){
		// 	dp[i + 1][j] = dp[i][j] + 1;
		// 	while (i + 1 < n && arr[i + 1][j] == '.' && !visited[i + 1][j]){
		// 		visited[i + 1][j] = true;
		// 		i++;
		// 		dp[i + 1][j] = dp[i][j];
		// 	}
		// 	// cout << i << ' ' << j << '\n';
		// }

		// if (i - 1 >= 0 && arr[i - 1][j] == '.' && !visited[i - 1][j]){
		// 	dp[i - 1][j] = dp[i][j] + 1;
		// 	while (i - 1 >= 0 && arr[i - 1][j] == '.' && !visited[i - 1][j]){
		// 		visited[i - 1][j] = true;
		// 		i--;
		// 		dp[i - 1][j] = dp[i][j];
		// 	}
		// 	// cout << i << ' ' << j << '\n';
		// }

		// if (j + 1 < n && arr[i][j + 1] == '.' && !visited[i][j + 1]){
		// 	dp[i][j + 1] = dp[i][j] + 1;
		// 	while (j + 1 < n && arr[i][j + 1] == '.' && !visited[i][j + 1]){
		// 		visited[i][j + 1] = true;
		// 		j++;
		// 		dp[i][j + 1] = dp[i][j];
		// 	}
		// 	// cout << i << ' ' << j << '\n';
		// }

		// if (j - 1 >= 0 && arr[i][j - 1] == '.' && !visited[i][j - 1]){
		// 	dp[i][j - 1] = dp[i][j] + 1;
		// 	while (j - 1 >= 0 && arr[i][j - 1] == '.' && !visited[i][j - 1]){
		// 		visited[i][j - 1] = true;
		// 		j--;
		// 		dp[i][j - 1] = dp[i][j];
		// 	}
		// 	// cout << i << ' ' << j << '\n';
		// }
		// q.push({i, j});
	}
	return -1;
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	cin >> n;
    	memset(visited, false, sizeof(visited));
    	memset(dp, 0, sizeof(dp));
    	for (int i = 0; i < n; i++){
    		for (int j = 0; j < n; j++) cin >> arr[i][j];
    	}
    	cin >> a >> b >> c >> d;
    	cout << bfs(a, b); el;
    	// for (int i = 0; i < n; i++){
    	// 	for (int j = 0; j < n; j++) cout << dp[i][j] << ' ';
    	// 	el;
    	// }
    	// for (int i = 0; i < n; i++){
    	// 	for (int j = 0; j < n; j++) cout << visited[i][j] << ' ';
    	// 	el;
    	// }
    }
    return 0;
}