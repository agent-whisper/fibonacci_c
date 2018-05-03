/*
	Program menampilkan bilangan fibonacci berdasarkan input pengguna
*/

#include <stdio.h>

void requestInteger(char* tag, int* container) {
	printf("Masukkan nilai %s (bilangan bulat): ", tag);
	scanf("%d", container);
}

void displayFibonacci(int firstNum, int secondNum, int length) {
	printf("%d %d ", firstNum, secondNum);

	int oneBehind = secondNum;
	int twoBehind = firstNum;
	int newNum = oneBehind + twoBehind;

	for (int i = 2; i < length; i++) {
		printf("%d ", newNum);

		twoBehind = oneBehind;
		oneBehind = newNum;
		newNum = oneBehind + twoBehind;
	}

	printf("\n");
}

void main() {
	int firstNum, secondNum, sequenceLength;

	requestInteger("elemen pertama", &firstNum);
	requestInteger("elemen kedua", &secondNum);
	requestInteger("panjang sekuens", &sequenceLength);

	displayFibonacci(firstNum, secondNum, sequenceLength);
}