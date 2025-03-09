#include <iostream>
#include <algorithm>

void heapify(int arr[], int a, int e) {
    int maior = e;
    int l = 2 * e + 1;
    int r = 2 * e + 2;

    if (l < a && arr[l] > arr[maior]) {
        maior = l;
    }        

    if (r < a && arr[r] > arr[maior]) {
        maior = r;
    }
        
    if (maior != e) {
        std::swap(arr[e], arr[maior]);

        heapify(arr, a, maior);
    }


}

void HeapSort(int arr[], int high) {
    for (int i = high / 2 - 1; i >= 0; i--) {
        heapify(arr, high, i);
    }

    for (int i = high - 1; i > 0; i--) {

        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {9, 12, 6, 0, 5, 3, 7, 13, 23, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arranjo original: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;    

    HeapSort(arr, size);

    std::cout << "Arranjo ordenado: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    

    return 0;
}