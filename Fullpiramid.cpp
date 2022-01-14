#include<iostream>
using namespace std;

int main()
{
	int n, s, i, j;
	cout << "Masukan Jumlah Baris: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (s = 1; i <= s; s++)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "* ";
		cout << "\n";
	}
	return 0;
}	
