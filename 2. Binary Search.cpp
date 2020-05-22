#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int  Max=1000;
int a[Max];

int val = 30;

bool check(int mid)
{
	if (mid < val) return 0;
	else return 1;

}
void binarySearch() {

	for (int i = 0; i < Max; i++) a[i] += i;

	int l = 0, r = Max;
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (check(mid)) r=mid;
		else l=mid+1;
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