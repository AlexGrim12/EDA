// Optimized implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver program to test above functions
int main()
{
	char arr[10][10];
	char *line = NULL;
	size_t len = 0;
	size_t read;
	FILE *fp;

	fp = fopen("p10.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	for (int i = 0; i < 10; i++)
	{
		read = getline(&line, &len, fp);
		strcpy(arr[i], line);
	}
	fclose(fp);

	printf("Array original:\n");
	for (int i = 0; i < 10; i++)
		printf("%d %s",i+1, arr[i]);
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		bool swapped = false;
		for (int j = 0; j < 9 - i; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				char temp[10];
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], temp);
				swapped = true;
			}
			if (swapped == false)
				break;
		}
	}

	printf("\nArray ordenado:\n");
	for (int i = 0; i < 10; i++)
		printf("%d %s",i+1,  arr[i]);
	printf("\n");

	return 0;
}
