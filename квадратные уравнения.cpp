#include "eq2.h"

int main()
{
	while (true)
	{
		setlocale(LC_ALL, "ru");
		double a, b, c, x;

		cout << "Введите коэффициенты для первого уравнения: \n";
		cin >> a >> b >> c;

		eq2 test1(a, b, c);
		cout << "Нахождение корней для первого уравения\n";
		test1.find_X();

		cout << "Введите для первого уравения значение X: \n";
		cin >> x;
		cout << test1.find_Y(x) << endl;

		cout << "Введите коэффициенты для второго уравения: \n";
		cin >> a >> b >> c;

		eq2 test2(a, b, c);
		cout << "Введите для первого уравения значение X: \n";
		test2.find_X();

		cout << "Введите для второго уравения значение X: \n";
		cin >> x;
		cout << test2.find_Y(x) << endl;

		cout << "Сложение коэффициентов первого и второго уравнений\n";
		eq2 cook = (test2 + test1);

		cout << "Нахождение корней для третьего уравения\n";
		cook.find_X();

		cout << "Введите для третьего уравения значение X: \n";
		cin >> x;
		cout << cook.find_Y(x) << endl;

		cout << "Введите новые коэффициенты для первого уравения\n";
		cin >> a >> b >> c;
		test1.set(a, b, c);

		cout << "Нахождение корней для измененного первого уравения\n";
		test1.find_X();

		cout << "Введите для измененного первого уравения значение X: \n";
		cin >> x;
		cout << test1.find_Y(x) << endl;

		while (true)
		{
			cout << "Вы хотите продолжить работу? Введите 1 или 0 (1 - продолжить, 0 - окончить)\n";
			int zxc;
			cin >> zxc;
			if (zxc == 0)
			{
				return 0;
			}
			else if (zxc == 1) 
			{
				break;
			}
			else
			{
				cout << "Вы ввели неверное значение\n";
			}
		}
	}
}