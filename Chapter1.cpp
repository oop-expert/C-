#include <iostream>
#include <cstdlib>


using namespace std; 

int main() 
{
    system("chcp 1251>nul");
 
    cout << "������� ��������� Ax = B\n";
    // ��������� ��������� 
    double A, B;
    // ���������� �������� ��� ���������� ���������: 
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    // �������������� ���� ����:
    try {
        if (A != 0) {
            // ������������� ����������:
            throw A;
        }
        if (B != 0) {
            // ������������� ����������:
            throw "������� ���";
        }
        cout << "������� - ����� �����" << endl;
    }
    // ��������� ��������� ����������
    catch (double e) {
        cout << "������� ���������: " << B / e << endl;
    }
    // ��������� ���������� ���������� 
    catch (char* e) {
        cout << e << endl;
    }

    return 0;
}
