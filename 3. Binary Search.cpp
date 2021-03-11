#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int  Max = 1000;
int a[Max];

int val = 70;

bool check(int mid)
{
	if (val > mid) return 1;
	else return 0;

}
void binarySearch() {

	for (int i = 0; i < Max; i++) a[i] += i;

	int l = 0, r = Max;
	while (l < r)
	{
		int mid = (l + r) / 2;
		cout << mid<<"    ";
		if (check(mid)) l = mid + 1;
		else r = mid;
	}
	cout << l << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 1; i <= t; ++i) {
		cout << "Case #" << i << ": ";
		binarySearch();
	}
}