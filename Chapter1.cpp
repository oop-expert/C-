#include <iostream>
#include <cstdlib>


using namespace std; 

int main() 
{
    system("chcp 1251>nul");
 
    // ������������� ����������:
    int num;
    // ������ �� ����������:
    int& ref = num;
    // ������������ �������� ���������:
    num = 100;
    // �������� �������� ���������� � ������:
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;
    // ������������ �������� ������:
    ref = 200;
    // �������� �������� ���������� � ������:
    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    return 0;
}
