#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Ã°ÅİÅÅĞò
void test_id1(int arr[], int size) {
	int i, j, k,result;
	for (i = 0; i < size - 1; i++) {
		result = 0;
		for (j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
				result = 1;
			}
		}if (result == 0) {
			printf("test result successfully!\n");
			break;
		}
	}for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

void test_id3(int arr[], int size) {
	int i, j, k, min;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++) {
			if (arr[min] > arr[j])
			{
				min = j;
			}

		}if (min != i)
		{
			k = arr[i];
			arr[i] = arr[min];
			arr[min] = k;
		}
	}for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
	

//Ñ¡ÔñÅÅĞò
void test_id2(int arr[],int size){
	int i, j, k, min;
	for ( i = 0; i < size-1; i++)
	{
		min = i;
		for ( j = i + 1; j < size; j++)
		{
			if (arr[min]>arr[j]) {
				min = j;
			}
		}if (min != i)
		{
			k = arr[i];
			arr[i] = arr[min];
			arr[min] = k;
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("arr1[%d] = %d\n", i, arr[i]);
	}
}

int main() {
	int arr[10];
	int arr1[10];
	int i;
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 1000;
	}
	test_id2(arr, 10);
	printf("************\n");
	for (i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 10;
	}
	test_id3(arr1, 10);
}