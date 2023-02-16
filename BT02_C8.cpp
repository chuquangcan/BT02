#include <bits/stdc++.h>
#include <map>

using namespace std;

/*
 * Complete the 'beautifulStrings' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long beautifulStrings(string s) 
{
    long int size = s.size();
    map<string, long> res;
    long int d=0;
    for (int i=0; i<size; i++)
    {
            string end;
            end = s;
            end.erase(i,1);
            int e_size = end.size();
        for (int j=0; j<e_size; j++)
        {
            string resstr;
            resstr = end;
            resstr.erase(j,1);
            res[resstr]=d;
            d++;
        }
    }
    return res.size();
}

int main()
{
    string s;
    getline(cin, s);

    long result = beautifulStrings(s);

    cout << result << "\n";

    return 0;
}
