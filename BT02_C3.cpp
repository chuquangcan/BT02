#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cout << setw(n+1-i);
		for (int j=1; j<=2*i-1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
