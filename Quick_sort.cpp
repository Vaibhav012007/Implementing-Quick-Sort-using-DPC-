#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high]; 
    int i = low - 1; 

    for (int j = low; j < high; j++) {
       
        if (array[j] <= pivot) {
            i++; 
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);
    return i + 1;
}


void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int list[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(list) / sizeof(list[0]);
    
    cout << "Original array: ";
    printArray(list, n);

    quickSort(list, 0, n - 1);

    cout << "Sorted array: ";
    printArray(list, n);

    return 0;
}