#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m, d=0;
	long int res=0;
	while (cin >> n)
	{
		if (n==-1)
		{
			break;
		}
		else
		{
			if (n!=m)
			{
				res=res*10+n;
				d++;
			}
		}
		m=n;
	}
	d--;
	while(res>0)
	{
		cout << int(res/pow(10,d)) << " ";
		res=res%int(pow(10,d));
		d--;
	}
	cout << -1;
}
