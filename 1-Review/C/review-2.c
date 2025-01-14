#pragma warning(disable:4996)
#include <stdio.h>

void ABC(int arr[], int i);

int main() {

	int arr[10];

	for (int i = 0; i < 10; i++) 
		scanf("%d", &arr[i]);

	for (int i = 0; i < 9; i++)
		ABC(arr, i);

	for (int i = 0; i < 10; i++)
		printf(" %d", arr[i]);

	return 0;
}

void ABC(int arr[], int i) {
	int max = arr[i];
	int max_index = i;

	for (int j = i; j < 10; j++) {
		if (max < arr[j]) {
			max = arr[j];
			max_index = j;
		}
	}

	int tmp = arr[max_index];
	arr[max_index] = arr[i];
	arr[i] = tmp;
}