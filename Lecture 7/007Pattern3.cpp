#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
	int num = 1;

	while (i <= n) {

		// in the ith row, print 'i' stars

		int j = 1;

		while (j <= i) {

			cout << num << " ";
			num++;
			j++;

		}

		cout << endl;

		i++;

	}

	return 0;
}