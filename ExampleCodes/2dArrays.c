﻿#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[2][2] = { 1,2 , 3, 4 };
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			a[i][j] += a[i][j];

	return 0;
}