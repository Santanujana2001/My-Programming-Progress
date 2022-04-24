#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int x;
	cin >> x;
	while (x--)
	{
		int n, k;
		string s;
		cin >> n >> k;
		cin >> s;
		int start, end;
		start = 0;
		end = n - 1;
		while (start < end)
		{
			if (s[start] != s[end])
			{
				if (s[start] == 0)
				{
					s[start] = '1';
				}
				else
				{
					s[start] = '0';
				}
				k--;
			}

			start++;
			end--;
		}
		if (k == 0)
		{
			cout << "YES\n";
		}
		else if (k > 0)
		{
			if (start == end)
			{
				cout << "YES\n"; // odd
			}
			else
			{ // even
				if (k % 2 == 0)
				{
					cout << "YES\n";
				}
				else
				{
					cout << "NO\n";
				}
			}
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
