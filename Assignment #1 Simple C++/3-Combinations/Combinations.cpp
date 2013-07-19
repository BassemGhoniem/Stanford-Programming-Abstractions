/*
 * File: Combinations.cpp
 * ----------------------
 * Problem3 (Chapter 7, exercise 9 page 349)
 * this program solves the combinations problem recursively
 * and prints the first ten raws of pascal trinagle
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
#include <iomanip>
using namespace std;

int c(int n, int k);
void printPascalTringle();
void printWhiteSpaces(int n);


int main() {
	int n, k;
	cout << "This program compute the C(n, k)" << endl;
	cout << "Enter n: " ;
	cin >> n;
	cout << "Enter k: " ;
	cin >> k;
	cout << "C(" << n << ", " << k << ") = " << c(n,k) << endl;
	printPascalTringle();
	return 0;
}

/*
 * Function: c
 * Usage: int comb = c(n,k)
 * -----------------------------------
 * Returns the combinations of n and c using recurcive strategy
 */
int c(int n, int k){
	if(k == 0 || n == k) return 1;
	return c(n - 1 , k - 1) + c(n - 1 , k);
}

/*
 * Function: printPascalTringle
 * Usage: printPascalTringle()
 * -----------------------------------
 * prints the first 10 raws of pascal tringle
 */

void printPascalTringle(){
	for(int i = 0; i < 10; i++){
		printWhiteSpaces(9 - i);
		for(int k = 0; k <= i; k++)			
			cout << setw(3) << c(i, k) <<"   ";
		cout << endl;
	}
}

/*
 * Function: printWhiteSpaces
 * Usage: printWhiteSpaces(n)
 * -----------------------------------
 * prints a pattern of n spaces before each row
 */

void printWhiteSpaces(int n){
	string space = "";
	for(int i = 0; i < n; i++)space += "   ";
	cout << space;
}
