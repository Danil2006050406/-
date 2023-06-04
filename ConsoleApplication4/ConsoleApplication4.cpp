#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

// Підпрограма для введення масиву
void inputArray(int B[], int size) {
    cout << "Введіть елементи масиву B (" << size << "):\n";
    for (int i = 0; i < size; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }
}

// Підпрограма для виведення елементів масиву на екран
void outputArray(const int B[], int size) {
    cout << "Елементи масиву B:\n";
    for (int i = 0; i < size; i++) {
        cout << B[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 100;
    int B[SIZE];
    int a, b;

    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    inputArray(B, SIZE);

    bool allInRange = true;
    for (int i = 0; i < SIZE; i++) {
        if (B[i] < a || B[i] > b) {
            allInRange = false;
            break;
        }
    }

    outputArray(B, SIZE);
    
    if (allInRange) {
        cout << "Всі елементи масиву B задовольняють умову" << endl;
    }
    else {
        cout << "Знайдено елемент, який не задовольняє умову" << endl;
    }

    return 0;
}
