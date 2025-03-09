#include <iostream>
#include <string>
#include <vector>

struct Pessoa {
    std::string nome;
    int idade;  
};

void partition(std::vector<Pessoa>& pessoas, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<Pessoa> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = pessoas[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = pessoas[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i].idade < R[j].idade || (L[i].idade == R[j].idade && L[i].nome < R[j].nome)) {
            pessoas[k] = L[i];
            i++;
        } else {
            pessoas[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        pessoas[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        pessoas[k] = R[j];
        j++;
        k++;
    }
}

// Função principal do Merge Sort
void mergeSort(std::vector<Pessoa>& pessoas, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(pessoas, left, mid);
        mergeSort(pessoas, mid + 1, right);

        partition(pessoas, left, mid, right);
    }
}

int main() {
    std::vector<Pessoa> pessoal = {
        {"Boris", 25},
        {"Bob", 30},        
        {"Nathan", 25},
        {"David", 3},
        {"Gus", 4},
        {"David", 38},
        {"Nelman", 15},
        {"Constantine", 31},        
        {"Bob", 31},
        {"Adam", 23}
    };

    std::cout << "Arranjo original: " << std::endl;
    for (const auto& p : pessoal) {
        std::cout << "Nome: " << p.nome << ", Idade: " << p.idade;
        std::cout << std::endl;
    }
    std::cout << std::endl;
  
    // Ordena o vetor
    mergeSort(pessoal, 0, pessoal.size() - 1);

    std::cout << "Arranjo ordenado: " << std::endl;
    for (const auto& p : pessoal) {
        std::cout << "Nome: " << p.nome << ", Idade: " << p.idade;
        std::cout << std::endl;
    }
    std::cout << std::endl;
        
    return 0;
}