#include <iostream>
#include <algorithm>
#include <ctime>


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

int randompartition(int arr[], int low, int high) {

    srand(time(NULL));
    int random = low + rand() % (high - low);

    std::swap(arr[random], arr[high]);
 
    return partition(arr, low, high);
}


void quickSort(int arr[], int low, int high, bool type) {
    if (low < high) {
        
        int pi = 0;

        if (type == true)
        {
            pi = partition(arr, low, high);
        }
        else
        {        
            pi = randompartition(arr, low, high);
        }

        quickSort(arr, low, pi - 1, type);
        quickSort(arr, pi + 1, high, type);
    }
}

int main() {
    int arr[] = {9, 12, 6, 0, 5, 3, 7, 13, 23, 1};
    int size = sizeof(arr) / sizeof(arr[0]);    
    bool type = true;

    std::cout << "Arranjo original: ";
    for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, size - 1, type);

    if (type == true)
    {
        std::cout << "mediana de tres" << std::endl;
    }
    else
    {
        std::cout << "pivo aleatorio" << std::endl;
    }

    std::cout << "Arranjo ordenado: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Tempo desenvolvido: " << float(std::clock()) / CLOCKS_PER_SEC << " s" ;
    

    return 0;
}