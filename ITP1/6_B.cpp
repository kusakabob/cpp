#include<iostream>
using namespace std;

int	main()
{
	bool cards[4][13];
	int n, rank;
	char suit;

	for (int i = 0; i < 4; i++)
		for (int j = 1; j <= 13; j++)
			cards[i][j] = 0;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> suit >> rank; 
		if (suit == 'S') cards[0][rank] = 1;
		if (suit == 'H') cards[1][rank] = 1;
		if (suit == 'C') cards[2][rank] = 1;
		if (suit == 'D') cards[3][rank] = 1;
	} 

	for (int i = 0; i < 4; i++){
		for (int j = 1; j <= 13; j++){
		if (cards[i][j] == 0 && i == 0) cout << "S " << j << endl;
		if (cards[i][j] == 0 && i == 1) cout << "H " << j << endl;
		if (cards[i][j] == 0 && i == 2) cout << "C " << j << endl;
		if (cards[i][j] == 0 && i == 3) cout << "D " << j << endl;
		}
	}

	return (0);
};
