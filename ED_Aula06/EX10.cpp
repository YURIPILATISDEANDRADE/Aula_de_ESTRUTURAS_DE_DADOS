#include <iostream>
#include <string>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
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

void dupe(int arr[], int size) {
    bool dump = true;
    int last  = 0; 

    for (int i = 0; i < size; i++) {
        if(arr[i] == arr[i + 1] && last != arr[i]){
            
            if(dump == true){
                std::cout << "Duplicatas encontradas: " ;
                std::cout << std::endl; 
                dump = false;
            }

            std::cout << arr[i] << " " ;
            last = arr[i];
        }
    }    
    
    std::cout << std::endl; 

}

int main() {

    int arr[] = {11, 45, 22, 11, 22, 11, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arranjo original: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, size - 1);

    std::cout << "Arranjo ordenado: ";
    for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    dupe(arr, size - 1);   
        
    return 0;
}