#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// n = total number of rows
	// (n / 2) = total number of black cells per row
	cout << n * (n / 2) << '\n';
	return 0;
}
