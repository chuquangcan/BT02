#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int size = s.size();
	if (s[0]=='-')
	{
		cout << "negative ";
		for (int i=1; i<size; i++)
		{
			if (s[i]>=48 && s[i]<=57)
			{
				switch(s[i]-48)
				{
					case 0:
						cout << "zero ";
						break;
					case 1:
						cout << "one ";
						break;
					case 2:
						cout << "two ";
						break;
					case 3:
						cout << "three ";
						break;
					case 4:
						cout << "four ";
						break;
					case 5:
						cout << "five ";
						break;
					case 6:
						cout << "six ";
						break;
					case 7:
						cout << "seven ";
						break;
					case 8:
						cout << "eight ";
						break;
					default:
						cout << "nine ";
						break;
				}
			}
		} 
	}
	else
	{
		cout << "positive ";
		for (int i=0; i<size; i++)
		{
			if (s[i]>=48 && s[i]<=57)
			{
				switch(s[i]-48)
				{
					case 0:
						cout << "zero ";
						break;
					case 1:
						cout << "one ";
						break;
					case 2:
						cout << "two ";
						break;
					case 3:
						cout << "three ";
						break;
					case 4:
						cout << "four ";
						break;
					case 5:
						cout << "five ";
						break;
					case 6:
						cout << "six ";
						break;
					case 7:
						cout << "seven ";
						break;
					case 8:
						cout << "eight ";
						break;
					default:
						cout << "nine ";
						break;
				}
			}
		} 
	}
}
