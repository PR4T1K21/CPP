#include <bits/stdc++.h>
using namespace std;

void sum(int mat[3][3], int r, int c)
{
	int i, j;
	int upper_sum = 0;
	int lower_sum = 0;

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			if (i <= j) {
				upper_sum += mat[i][j];
			}
		}

	printf("Upper sum is %d\n", upper_sum);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			if (j <= i) {
				lower_sum += mat[i][j];
			}
		}

	printf("Lower sum is %d", lower_sum);
}

int main()
{
	int r = 3;
	int c = 3;


	int mat[3][3] = {{ 6, 5, 4 },
					{ 1, 2, 5 },
					{ 7, 9, 7 }};

	sum(mat, r, c);
	return 0;
}
