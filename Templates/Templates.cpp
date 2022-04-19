
///   написать 3 шаблонные функции сортировки одномерных массивов любого типа
///   способы :
///   - пузырьком;
///   - вставками;
///   - выбором.


#include <iostream> 
#include <ctime>
using namespace std;

template <typename T>
void BubleSorting(T arr[], int size);

template <typename T>
void SelectionSort(T arr[], int size);

template <typename T>
void InsertionSort(T arr[], int size);

template <typename T>
void Show(T arr[], int size);

int main();


template <typename T>
void BubleSorting(T arr[], int size)
{
	for (int pr = 0; pr < size; pr++)
	{
		for (int k = size - 1; k > 0; k--)
		{
			if (arr[k - 1] > arr[k])
				swap(arr[k], arr[k - 1]);
		}
	}
	cout << "\n\n";
}

template <typename T>
void SelectionSort(T arr[], int size)
{
	for (int pr = 0; pr < size; pr++) { 
		int minIndex = pr;
		T minValue = arr[pr];

		for (int j = pr + 1; j < size; j++)
		{
			if (arr[j] < minValue) {
				minIndex = j;
				minValue = arr[j];			
			}	
		}
		swap(arr[minIndex], arr[pr]);
	}
}

template <typename T>
void InsertionSort(T arr[], int size)
{
	for (int pr = 0; pr < size; pr++)
	{
		T value = arr[pr];
		int index;
		for (index = pr - 1; index >= 0 && arr[index] > value; index--)
			swap(arr[index + 1], arr[index]);
	}
}

template <typename T>
void Show(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << "\t";

	cout << "\n\n";
}

int main()
{
	int arr1[10] = { 1, -45, 93, 451, -3, 58, 111, -59, 86, 3 };
	BubleSorting(arr1, 10);
	Show(arr1, 10);
	double arr2[10] = { 1.1, -45.5, 93.3, 451.5, -3.6, 58.8, 111.6, -59.9, 86.7, 3.9 };
	SelectionSort(arr2, 10);
	Show(arr2, 10);
	float arr3[10] = { 22.56, 457.89, 4.0, 44.88, -123.456, 0.1236, 91.5, 6.3, -638.697, -2.16 };
	InsertionSort(arr3, 10);
	Show(arr3, 10);
}