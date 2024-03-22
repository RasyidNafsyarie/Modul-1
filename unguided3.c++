#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Penggunaan Array
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        cout << "Nilai array ke-" << i << ": " << arr[i] << endl;
    }

    // Penggunaan Map
    map<string, int> nilaiMap;
    nilaiMap["A"] = 10;
    nilaiMap["B"] = 20;
    nilaiMap["C"] = 30;

    cout << "Nilai map untuk kunci 'A': " << nilaiMap["A"] << endl;
    cout << "Nilai map untuk kunci 'B': " << nilaiMap["B"] << endl;
    cout << "Nilai map untuk kunci 'C': " << nilaiMap["C"] << endl;

    return 0;
}