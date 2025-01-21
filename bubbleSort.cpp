#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool troca;  

    for (int i = 0; i < n; ++i){
        troca = false;

        for (int j = 0; i < n - i - 1; ++j){
            if(arr[j] > arr[j +1]){
                swap(arr[j], arr[j + 1]);
                troca = true;
            }
        }

        if (!troca){
            break;
        }
    }
}

void imprimirArray(const vector<int>& arr){
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numeros = {34, 67, 23, 45, 12, 9};

    cout << "Numeros antes: ";
    imprimirArray(numeros);

    BubbleSort(numeros);

    cout << "numeros depois: ";
    imprimirArray(numeros);

    return 0;
}
