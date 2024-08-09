#include <iostream>
#include <cstdlib>


using namespace std; 

int main() 
{
    system("chcp 1251>nul");
 
    // Целочисленная переменная:
    int num;
    // Ссылка на переменную:
    int& ref = num;
    // Присваивание значения перменной:
    num = 100;
    // Проверка значения переменной и ссылки:
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;
    // Присваивание значения ссылке:
    ref = 200;
    // Проверка значения переменной и ссылки:
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    return 0;
}
