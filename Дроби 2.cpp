#include "rational.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int size, ind1, ind2;
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
    cout << "Введите порядковые номера дробей (от 1 до " << size << "), которые хотите сложить : \n";
    cin >> ind1 >> ind2;
    cout << "\nПолученная дробь:\n";
    (arr[ind1 - 1] + arr[ind2 - 1]).show();

    cout << "Введите порядковые номера дробей (от 1 до " << size << "), для которых выполнить разность: \n";
    cin >> ind1 >> ind2;
    cout << "\nПолученная дробь:\n";
    (arr[ind1 - 1] - arr[ind2 - 1]).show();

    cout << "Введите порядковый номера дроби (от 1 до " << size << "), числитель которой хотите увеличить на единицу: \n";
    cin >> ind1;
    cout << "\nПолученная дробь:\n";
    (++arr[ind1 - 1]).show();


    cout << "Введите порядковые номера дробей (от 1 до " << size << "), которые хотите сравнить : \n";
    cin >> ind1 >> ind2;
    if (arr[ind1 - 1] == arr[ind2 - 1])
    {
        cout << "Дроби равны\n";
    }
    if (arr[ind1 - 1] > arr[ind2 - 1])
    {
        cout << "Первая дробь больше второй\n";
    }
    if (arr[ind1 - 1] < arr[ind2 - 1])
    {
        cout << "Вторая дробь больше первой\n";
    }

    cout << "Первая дробь теперь вторая :)\n";
    arr[ind1 - 1] = arr[ind2 - 1];

    delete[] arr;
    return 0;
}