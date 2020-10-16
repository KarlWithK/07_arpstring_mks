#include <stdio.h>
#include "funs.h"

int main() {
	int arr[5], ray[5], i, result;
	printf("part 1\n");
	for (i = 0; i < 5; i++) {
		*(arr + i) = i * 5;
		/* printf("arr[%d] equals to %d\n", i, *(arr + i)); */
	}
	result = average(arr, 5);
	printf("%d\n", result);
	printf("part 2\n");
	copy(arr, ray, 5);
	for (i = 0; i < 5; i++) {
		printf("ray[%d] equals to %d\n", i, *(ray + i));
	}

	printf("part 3\n");
	char s[] = "karl";
	int x = len(s);
	printf("%d\n", x);

		

	return 0;
}
