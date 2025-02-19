#include "maint.h"

void random_matrix(int matrix[N][N],int start,int end) {
	for (int i = 0; i < N-1; i++)
	{
		for(int b  = 0; b  < N-1; b++)
		{
			matrix[i][b] =  rand() % (end - start + 1) + start;
		}
	}
}


string matrix_convert(int matrix[N][N]) {
	string res = "";
	for (int i = 0; i < N - 1; i++)
	{
		for (int b = 0; b < N - 1; b++)
		{
			res+= " [" + to_string(matrix[i][b]) + "] ";
		}
		res += "\n";
	}
	return res;
}



string matrix_zero(int matrix[N][N]) {
	string res = "";
	bool flag = false;
	for (int i = 0; i < N; i++)
	{
		for (int b = 0; b < N; b++)
		{
			
			
			if (matrix[i][b] < matrix[i][b + 1] || matrix[i][b + 1] < matrix[i][b]) {
				flag = true;
			}
			
		}
	}
	res += to_string(flag);	return res;
}