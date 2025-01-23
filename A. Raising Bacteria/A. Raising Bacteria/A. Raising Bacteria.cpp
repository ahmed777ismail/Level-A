#include <iostream>
#define Seif ios_base::sync_with_stdio(false)
#define isON(n,k)((n>>k)& 1)
using namespace std;

int main()
{
	Seif;
	int n, c = 0;
	cin >> n;
	for (int i = 31; i >= 0; i--)
	{
		if (isON(n, i))
		{
			c++;
		}
	}
	cout << c;
}