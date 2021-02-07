#include<iostream>
using namespace std;

int	main()
{
	int n, A[100];

	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];

	for (int i = 0; i < n; i++){
		cout << A[n - 1 - i];
		if (i != n - 1) cout << " ";
		}

	cout << endl;
	return (0);
};
