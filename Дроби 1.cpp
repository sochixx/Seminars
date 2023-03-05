#include <iostream>
#include "rational.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Введите количество дробей: ";
    cin >> size;
    cout << endl;
    rational* arr = new rational[size];
    for (int i = 0; i < size; i++)
    {
        int temp1, temp2;
        cout << "Введите числитель и знаменатель дроби " << i + 1 << " дроби:\n";
        cin >> temp1 >> temp2;
        arr[i].set(temp1, temp2);

        cout << i + 1 << " дробь: \n";
        arr[i].show();

        cout << "Введите новые значения для " << i + 1 << " дроби\n";
        cin >> temp1 >> temp2;

        arr[i].set(temp1, temp2);

        cout << "Новая дробь: \n";
        arr[i].show();
    }
    delete[] arr;
    return 0;
}