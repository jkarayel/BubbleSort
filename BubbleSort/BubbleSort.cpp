
#include <iostream>
void BubbleSort(int array[], int size);
void displaying(int array[], int size);
int main()
{
	int numbers[] = { 13, 6, 89, 90, 2, 5, 23, 46, 88, 100, 7 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	BubbleSort(numbers, size);
	displaying(numbers, size);
}

void displaying(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}
}
void BubbleSort(int array[], int size) {
	for (int i = 0; i < size - 1; i++)
	{
		int temp;
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];	
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}	
		}
		
	}
}
