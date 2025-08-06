#include "sort.h"

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap(int *a, int *b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions the array using the Lomuto partition scheme
 * @array: The array to partition
 * @low: The starting index
 * @high: The ending index
 * @size: Size of the array (for printing)
 * Return: The index of the pivot element after partitioning
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high]; //pivot = dernier élément
	int i = low - 1; //index plus petit élément / position correcte du pivot
	int j; // variable pour boucle

	for (j = low; j <= high - 1; j++) // parcourt tous les éléments sauf le pivot
	{
		if (array[j] <= pivot) // si élément <= au pivot
		{
			i++; // incrémentation index du plus petit
			if (i != j) // si les index sont différent
			{
				swap(&array[i], &array[j]); // échange les éléments
				print_array(array, size); // affiche le tableau 
			}
		}
	}
	if (i + 1 != high) //si le pivot n'est pas déjà à sa place
	{
		swap(&array[i + 1], &array[high]); // place le pivot à sa position finale
		print_array(array, size); //affiche le tableau
	}
	return (i + 1); // retourne la position finale du pivot
}

/**
 * quick_sort_recursive - Recursively sorts an array
 * using the Quick sort algorithm
 * @array: The array to be sorted
 * @low: The starting index
 * @high: The ending index
 * @size: Size of the array (for printing)
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high) // condition d'arrêt : il faut 2 éléments min
	{
		int pivot_index = partition(array, low, high, size); // partitionne et obtient l'index du pivot

		quick_sort_recursive(array, low, pivot_index - 1, size); //trie la partie gauche éléments < pivot
		quick_sort_recursive(array, pivot_index + 1, high, size); // trie la partie droite élément > pivot
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm (Lomuto partition scheme)
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2) // vérifie les cas de base
		return;

	quick_sort_recursive(array, 0, size - 1, size); // lance le tri récursif
}
