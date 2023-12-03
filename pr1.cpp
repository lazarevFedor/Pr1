#include "iostream"
using namespace std;

void idz13(int& num, int& order, int& mask) {
    order = sizeof(num) * 8 - 1;
    mask = 1 << order;
    cout << "\nПредставление числа по идз: ";

    if (num < 0) {
        for (int i = 0; i < sizeof(num) * 8; i += 2) {
            num &= ~(1 << i);
        }
    }
    else {
        for (int i = 1; i < sizeof(num) * 8; i += 2) {
            num |= (1 << i);
        }
    }
    for (int i = 0; i <= order; i++) {
        cout << ((num & mask) ? 1 : 0);
        num = num << 1;

        if (!i)
            cout << " ";
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int numOption, number, num, mask, order;
    while (true) {

        cout << "Какое задание хотите проверить?" << endl;
        cout << "Введите ответ: ";
        cin >> numOption;
        switch (numOption) {
        case 1:
            cout << "\nРешение 1 задания: \n";
            cout <<
                "Количсетво занимаемой памяти следующими типами данных:\n" <<
                "int: " << sizeof(int) << "\n" <<
                "short int: " << sizeof(short int) << "\n" <<
                "long int: " << sizeof(long int) << "\n" <<
                "float: " << sizeof(float) << "\n" <<
                "double: " << sizeof(double) << "\n" <<
                "long double: " << sizeof(long double) << "\n" <<
                "char: " << sizeof(char) << "\n" <<
                "bool: " << sizeof(bool) << "\n";
            break;

        case 2:
            cout << "\nРешение 2 задания:\n";
            cout << "Введите целое число: ";
            cin >> number;
            num = number;
            order = sizeof(number) * 8 - 1;
            mask = 1 << order;
            cout << "\nДвоичное представление числа: ";

            for (int i = 0; i <= order; i++) {
                cout << ((number & mask) ? 1 : 0);
                number = number << 1;

                if (!i)
                    cout << " ";
            }
            cout << endl;
            idz13(num, order, mask);
            break;

        case 3:
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
            num = intI;
            cout << "\nДвоичное представление: ";
            for (int i = 0; i <= order; i++) {
                cout << ((intI & mask) ? 1 : 0);
                intI = intI << 1;

                if (!i || i == 8)
                    cout << " ";

            }
            idz13(num, order, mask);
            break;
        }
        cout << "\n\nВыбрать другое задание?(1 - да, 0 - нет)\n";
        cout << "Введите ответ: ";
        cin >> numOption;
        if (numOption != 1) {
            break;
        }
        cout << endl;
    }
    return 0;
}
