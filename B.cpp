#include <iostream>
using namespace std;
int k, n, a[1000];
void terms(int x, int y, int z) {
	if (y == 0) {
		if (x == k) {
			for (int i = 0; i < x; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}
		return;
	}
	for (int i = y; i >= z; i--)
	{
		if (i >= z)
		{
			a[x] = i;
			terms(x + 1, y - i, i);
		}
	}
}
int main() {
	cin >> n >> k;
	terms(0, n, 1);
}
