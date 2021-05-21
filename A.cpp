#include <iostream>
#include <vector>
using namespace std;

int hex(int num)
{
	vector <int> out;
	while (num > 0)
	{
		int hex = num % 16;
		out.push_back(hex);
		num /= 16;
	}
	int k = out.size();
	return out[k - 1];
}

int main() {
	int a, b, i;
	int count = 0;
	long int max = -100000000000000000;
	cin >> a >> b;
	for ( i = a; i <= b; i++)
	{
		if (abs(i) % 16 == 11 and i % 6 != 0 and hex(abs(i))==12) {
			count++;
			if (i > max)
			{
				max = i;
			}
		}
	}
	
	if (!count)
	{
		cout << 0 << " " << 0;
		return 0;
	}

	cout << count << " " << max << endl;
	return 0;
}