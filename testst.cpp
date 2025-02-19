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

	string expected = "";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
}
void test02() {
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,4,0,6},
		{3,4,5,3,7},
		{4,5,6,7,8},
		{5,6,2,8,9},
	};

	string expected = "2 ";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
}
void test03() {
	int matrix[][N]{
		{1,2,3,0,5},
		{2,3,0,5,6},
		{3,4,5,0,7},
		{4,0,6,7,8},
		{5,6,7,8,0},
	};

	string expected = "1 2 3 4 5 ";

	string actual = matrix_zero(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";
	print(msg);
	
}