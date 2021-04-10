#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int sumAlgorithmA(int n) {
	int result = 0;

	result = n*(n + 1) / 2;

	return result;
}

int sumAlgorithmB(int n) {
	int result = 0;
	int i = 1;

	/*
		while (i != n+1) {
		result += i;
		i++;
	}
	*/

	do {
		result += i;
		i++;
	} while (i != n+1);


	return result;
}

int sumAlgorithmC(int n) {
	int result = 0;

	int i = 0;

	while (i != n+1) {
		int k = i;
		while (k != 0) {
			result += 1;
			k--;
		}
		i++;
	}

	return result;
}


int main() {
	clock_t startA, finishA;
	clock_t startB, finishB;
	clock_t startC, finishC;

	double durationA;
	double durationB;
	double durationC;

	int test = 10;

	startA = clock();
	int testA = sumAlgorithmA(test);
	finishA = clock();

	startB = clock();
	int testB = sumAlgorithmB(test);
	finishB = clock();

	startC = clock();
	int testC = sumAlgorithmC(test);
	finishC = clock();


	cout << "2번의 동일함을 보여라" << endl;
	cout << testA << endl;
	cout << testB << endl;
	cout << testC << endl;

	durationA = (double)(finishA - startA)/CLOCKS_PER_SEC;
	durationB = (double)(finishB - startB)/CLOCKS_PER_SEC;
	durationC = (double)(finishC - startC)/CLOCKS_PER_SEC;

	cout << "3 알고리즘의 클럭수" << endl;
	cout << startA << endl;
	cout << finishA << endl;
	cout << durationB << endl;
	cout << durationC << endl;

	return 0;
}