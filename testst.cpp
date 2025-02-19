#include "maint.h"
#include "util.h"
void print(string msg) {
	cout << msg << endl;
	cout << "_________________________________" << endl;
}
void test01() {
	
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{5,6,7,8,9},
	};

	string expected = "1";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
	cout << matrix_zero(matrix) << endl;
}
void test02() {
	int matrix[][N]{
		{5,4,3,2,1},
		{2,6,4,0,6},
		{1,2,3,4,5},
		{4,5,6,7,8},
		{5,2,3,5,7},
	};

	string expected = "1";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
	cout << matrix_zero(matrix) << endl;
}
void test03() {
	int matrix[][N]{
		{1,8,3,0,5},
		{2,6,0,5,9},
		{3,5,5,0,7},
		{4,0,6,1,8},
		{5,9,7,2,0},
	};


	string expected = "0";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
	cout << matrix_zero(matrix) << endl;
	
}