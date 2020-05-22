#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int  Max=1000;
double logFactorial[Max], p2[Max];

//Compute binomial distribution  -   nCr / total posibility , with 0.5 probability of either action
double choose(int N, int K)
{
	if (K < 0 || K > N) return 0;
	return exp(logFactorial[N] - logFactorial[K] - logFactorial[N - K]- p2[N]);
}

void factorial() {
	cout<< choose(5, 2) <<" \n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//precompute factorial at the start
	logFactorial [0] = 0.0;
	for (int i = 1; i < Max; i++)
		logFactorial[i] = logFactorial[i - 1] + log(i);
	p2[1] = log(2);
	for (int i = 2; i < Max; i++)
		p2[i] = p2[i - 1] + p2[1];

	int t;
	cin >> t;
	
	for (int i = 1; i <= t; ++i) {
		cout << "Case #" << i << ": ";
		factorial();
	}
}