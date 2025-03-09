#include <iostream>
#include <algorithm>

void insertionSort(int arranjo[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = arranjo[i];
        int j = i - 1;
    
        while (j >= 0 && arranjo[j] > chave) {
            arranjo[j + 1] = arranjo[j];
            j--;
        }
    
        arranjo[j + 1] = chave;
    }
}

int partition(int arr[], int low, int high) {
    int meio = (low + high) / 2;
    int pivotalto = arr[high];
    int pivotmed = arr[meio];    
    int pivotbaixo = arr[low];
    int pivotmedia = low;

    if ((pivotbaixo < pivotmed && pivotmed < pivotalto) || (pivotalto < pivotmed && pivotmed < pivotbaixo)) {
        pivotmedia = meio;
    } else if ((pivotmed < pivotalto && pivotalto < pivotbaixo) || (pivotbaixo < pivotalto && pivotalto < pivotmed)) {
        pivotmedia = high;
    }

    std::swap(arr[pivotmedia], arr[high]);

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    
    
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arranjo original: ";
    for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    if (size < 10) {
        insertionSort(arr, size);
        std::cout << "Usando Insertion Sort" << std::endl;
    }
    else {
        quickSort(arr, 0, size - 1);        
        std::cout << "Usando Quick Sort" << std::endl;
    }

    std::cout << "Arranjo ordenado: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}