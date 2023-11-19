#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> a(N), b(N);
	for (int i = 0; i < N; i++) { cin >> a[i]; }
	for (int i = 0; i < N; i++) { cin >> b[i]; }

	int result = 0;
	for (int i = 0; i < N; i++) { result += abs(a[i] - b[i]); }

	cout << result / 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}