#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cout << setw(i);
		for (int j=2*n-1; j>=2*i-1; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
