#include <iostream>
using namespace std;

int main()
{
    /* Это типо конспект? */
    // Переменная - область памяти, имеющая имя и хранящая некоторое определенное значение.

    /* Типы данных */
    // Целочисленные знаковые (те, что хранят число от отрицательного до положительного):
    short int vShortInt = 10;
    int vInt = 20;
    long int vLongInt = 30;
    long long int vLongLongInt = 40;

    // Целочисленные беззнаковые (те, что хранят только положительные числа):
    unsigned short int vUnsignedShortInt = 10;
    unsigned int vUnsignedInt = 20;
    unsigned long int vUnsignedLongInt = 30;
    unsigned long long int vUnsignedLongLongInt = 40;

    // Вещественные (с плавающей точкой):
    float vFloat = 1.1;
    double vDouble = 2.2;
    long double vLongDouble = 3.3;

    // Символьные:
    char vChar = 'a';
    wchar_t vWChar = L'a';

    // Логические:
    bool vBool = true;

    // ****Вопрос: если short int имеет размер 2 байта (2^16) и он является знаковым, то почему при сумме 17000+17000 не происходит переполнение
    // и переменная выходит за границы, вплоть до 65535, будто она преобразуется в безнаковое целочисленное значение? Либо я чего-то не понял, либо что-то пошло не так.
    // Но само переполнение работает просто: если выходим за рамки, то число начинет идти с отрицательного, что вполне себе очевидное поведение. 
    short int vShortIntForOverflow = 17000;

    cout << "\nsigned: \n" << endl;
    cout << "Type: ShortInt, size: " << sizeof(vShortInt) << " bytes, where min value: " << SHRT_MIN << ", max value: " << SHRT_MAX << ". Operation result: " << (vShortInt + vInt) << endl;
    cout << "Type: Int, size: " << sizeof(vInt) << " bytes, where min value: " << INT_MIN << ", max value: " << INT_MAX << ". Operation result: " << (vInt + vLongInt) << endl;
    cout << "Type: LongInt, size: " << sizeof(vLongInt) << " bytes, where min value: " << LONG_MIN << ", max value: " << LONG_MAX << ". Operation result: " << (vLongInt + vLongLongInt) << endl;
    cout << "Type: LongLongInt, size: " << sizeof(vLongLongInt) << " bytes, where min value: " << LLONG_MIN << ", max value: " << LLONG_MAX << ". Operation result: " << (vLongLongInt + vInt) << endl;
    cout << "\nunsigned: \n" << endl;
    cout << "Type: UnsignedShortInt, size: " << sizeof(vUnsignedShortInt) << " bytes, where max value: " << USHRT_MAX << ". Operation result: " << (vUnsignedShortInt + vUnsignedInt) << endl;
    cout << "Type: UnsignedInt, size: " << sizeof(vUnsignedInt) << " bytes, where max value: " << UINT_MAX << ". Operation result: " << (vUnsignedInt + vUnsignedLongInt) << endl;
    cout << "Type: UnsignedLongInt, size: " << sizeof(vUnsignedLongInt) << " bytes, where max value: " << ULONG_MAX << ". Operation result: " << (vUnsignedLongInt + vUnsignedLongLongInt) << endl;
    cout << "Type: UnsignedLongLongInt, size: " << sizeof(vUnsignedLongLongInt) << " bytes, where max value: " << ULLONG_MAX << ". Operation result: " << (vUnsignedLongLongInt + vInt) << endl;
    cout << "\nfloat: \n" << endl;
    cout << "Type: Float, size: " << sizeof(vFloat) << " bytes, where min value: " << FLT_MIN << ", max value: " << FLT_MAX << ". Operation result: " << (vFloat + vDouble) << endl;
    cout << "Type: Double, size: " << sizeof(vDouble) << " bytes, where min value: " << DBL_MIN << ", max value: " << DBL_MAX << ". Operation result: " << (vDouble + vLongDouble) << endl;
    cout << "Type: LongDouble, size: " << sizeof(vLongDouble) << " bytes, where min value: " << LDBL_MIN << ", max value: " << LDBL_MAX << ". Operation result: " << (vLongDouble + vInt) << endl;
	cout << "\nbool: \n" << endl;
    cout << "Type: Bool, size: " << sizeof(vBool) << " bytes. Operation result: " << (!vBool) << endl;
    cout << "\nOverflow: \n" << endl;
    cout << "Try to overflow? (why dosn't it work): " << vShortIntForOverflow + vShortIntForOverflow << endl;
    return 0;
}