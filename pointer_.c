#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[100];
	int* ptr = arr;
	int num = 0;
	int i = 0;
	int max = 0;
	int sum = 0;


	for (i = 0; i < 100; ptr++)
	{
		num = rand() % 91 + 10;
		*ptr = num;
		sum += *ptr;

		if (*ptr > max)
		{
			max = *ptr;
		}
		i++;
	}

	printf("합 : %d / 가장 큰 값 : %d", sum, max);

}
