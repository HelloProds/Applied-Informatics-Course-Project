#include <stdio.h>

void bubbleSort(int arr[], int n);
float findMean(int arr[][3], int row, int col);

int main() {
    int arr[] = {5, 3, 8, 1, 4}; // Initialize the array with unsorted elements
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the number of elements in the array

    int arr2D[2][3] = {{2, 4, 6}, {8, 10, 12}}; // Initialize a two-dimensional array
    int row = 2, col = 3; // Set the number of rows and columns in the array

    // Print the task, name and faculty number of the student
    printf("the assignment for the programm is: Да се състави блокова схема на алгоритъм и да се напише програма за сортиране на елементите на едномерен масив по метода на мехурчето. В началото на програмата да се отпечати заданието, името на студента и фак. номер.\n");
    printf("Student name: Nicola\n");
    printf("Faculty number: 11111111\n\n");

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using the bubble sort algorithm
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find the mean of the elements in the 2D array and print it
    float mean1 = findMean(arr2D, row, col);
    printf("Mean of the elements in the 2D array: %f\n", mean1);

    // Modify the 2D array and find the mean again
    arr2D[0][0] = 1;
    arr2D[1][2] = 15;
    float mean2 = findMean(arr2D, row, col);
    printf("Mean of the modified elements in the 2D array: %f\n", mean2);

    return 0;
}

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

float findMean(int arr[][3], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }
    return (float)sum/(row*col);
}


