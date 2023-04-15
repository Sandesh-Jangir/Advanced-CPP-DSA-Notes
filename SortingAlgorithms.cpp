#include <iostream>
using namespace std;

void bubbleSort(int n /* size of the array */, int *array)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] < array[j])
                swap(array[i], array[j]);
        }
    }
    return;
}

void selectionSort(int n, int *array){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for (int j = i+1; j < n; j++){
            if (array[j] < array[min_index]) min_index = j;
        }
        if (array[min_index] < array[i]) swap(array[i], array[min_index]);
    }
}
int main()
{
    /**
     * Aproach To Sorting Algorithms.
     *
     * Bubble Sort - Repeatedly swap two numbers if in wrong order.
     * Selection Sort - Repeatedly find the smallest element of the unsorted array and put it in the beginning.
     *
     * Space Time Complexity of these Algorithms.
     *
     * Bubble Sort [Stable] ->
     * 
     * Time Complexity - O(n^2)
     * Space Complexity - O(1)
     * Maximum Number of Swaps - O(n^2)
     * 
     * Selection Sort [Unstable] ->
     * 
     * Time Complexity - O(n^2)
     * Space Complexity - O(1)
     * Maximum Number Of Swaps - O(n)
     */

    int mySampleArray[] = {5, 2, 8, 7, 9};

    bubbleSort(5, mySampleArray);
    selectionSort(5, mySampleArray);

    // Printing the array.
    for (int i = 0; i < 5; i++)
    {
        cout << mySampleArray[i] << " ";
    }
    return 0;
}