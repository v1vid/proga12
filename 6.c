#include <stdio.h>
#include <conio.h>

int main() {
	char* arr = (char*)malloc(5 * sizeof(char));

	arr[0] = 'H';
	arr[1] = 'e';
	arr[2] = 'l';
	arr[3] = 'l';
	arr[4] = 'o';

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %c\n", i, *(arr + i));
	}

    free(arr);
	return 0;
}

