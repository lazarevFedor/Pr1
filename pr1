#include "iostream"
using namespace std;

void idz13_3(int number) {
    int order = sizeof(number) * 8 - 1;
    int mask = 1 << order;
    cout << "\nПредставление числа по идз: ";

    if (number < 0) {
        for (int i = 0; i < sizeof(number) * 8; i += 2) {
            number &= ~(1 << i);
        }
    }
    else {
        for (int i = 1; i < sizeof(number) * 8; i += 2) {
            number |= (1 << i);
        }
    }
    for (int i = 0; i <= order; i++) {
        cout << ((number & mask) ? 1 : 0);
        number = number << 1;

        if (!i)
            cout << " ";
    }
}

void idz13_2(int number) {
    int order = sizeof(number) * 8 - 1;
    int mask = 1 << order;
    cout << "\nПредставление числа по идз: ";

    if (number < 0) {
        for (int i = 0; i < sizeof(number) * 8; i += 2) {
            number &= ~(1 << i);
        }
    }
    else {
        for (int i = 1; i < sizeof(number) * 8; i += 2) {
            number |= (1 << i);
        }
    }
    for (int i = 0; i <= order; i++) {
        cout << ((number & mask) ? 1 : 0);
        number = number << 1;

        if (!i)
            cout << " ";
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int k;

    while (true) {

        cout << "Какое задание хотите проверить?" << endl;
        cout << "Введите ответ: ";
        int numOption;
        cin >> numOption;
        cout << endl;

        if (numOption == 1) {
            cout << "Решение 1 задания: " << endl;
            cout <<
                "Количсетво занимаемой памяти следующими типами данных:" << endl <<
                "int: " << sizeof(int) << endl <<
                "short int: " << sizeof(short int) << endl <<
                "long int: " << sizeof(long int) << endl <<
                "float: " << sizeof(float) << endl <<
                "double: " << sizeof(double) << endl <<
                "long double: " << sizeof(long double) << endl <<
                "char: " << sizeof(char) << endl <<
                "bool: " << sizeof(bool) << endl;
        }

        else if (numOption == 2) {
            cout << "\nРешение 2 задания: " << endl;
            cout << "Введите целое число: ";
            int a;
            cin >> a;
            int a2 = a;
            int order = sizeof(a) * 8 - 1;
            int mask = 1 << order;
            cout << "\nДвоичное представление числа: ";

            for (int i = 0; i <= order; i++) {
                cout << ((a & mask) ? 1 : 0);
                a = a << 1;

                if (!i)
                    cout << " ";
            }
            cout << endl;
            idz13_2(a2);
        }

        else if (numOption == 3) {
            cout << "\nРешение 3 задания: " << endl;
            int order = sizeof(int) * 8 - 1;
            int mask = 1 << order;
            union
            {
                int intI;
                float floatF;
            };
            cout << "Введите вещественное число: ";
            cin >> floatF;
            int intI3 = intI;
            cout << "\nДвоичное представление: ";
            for (int i = 0; i <= order; i++) {
                cout << ((intI & mask) ? 1 : 0);
                intI = intI << 1;

                if (!i || i == 8)
                    cout << " ";

            }
            idz13_3(intI3);

        }
        else if (numOption == 4) {
            int number, number1;
            int order = sizeof(number) * 8 - 1;
            int mask = 1 << order;
            cout << "Введите целое число: ";
            cin >> number;
            number1 = number;
            for (int i = 0; i <= order; i++) {
                cout << ((number1 & mask) ? 1 : 0);
                number1 = number1 << 1;

                if (!i)
                    cout << " ";
            }
            cout << endl;
          
            if (number < 0) {
                for (int i = 0; i < sizeof(number)*8; i += 2) {
                    number &= ~(1 << i);
                }
            }
            else {
                for (int i = 1; i < sizeof(number)*8; i += 2) {
                    number |= (1 << i);
                }
            }
            for (int i = 0; i <= order; i++) {
                cout << ((number & mask) ? 1 : 0);
                number = number << 1;

                if (!i)
                    cout << " ";
            }
        }
        cout << "\n\nВыбрать другое задание?(1 - да, 0 - нет)" << endl;
        cout << "Введите ответ: ";
        cin >> k;
        if (k != 1) {
            break;
        }
        cout << endl;
    }
    return 0;
}
