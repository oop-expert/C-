#include <iostream>
#include <cstdlib>


using namespace std; 

int main() 
{
    system("chcp 1251>nul");
 
    // ������ �������
    const int n = 10;
    // ������������� ���������� ��������� �����:
    srand(2);
    // �������� �������:
    int nums[n];
    // ������������� ����������:
    int i, j, k, s;
    cout << "������ �� ����������: \n| ";
    // ���������� ������� ���������� �������:
    for (k = 0; k < n; k++) {
        nums[k] = rand() % 10;
        cout << nums[k] << " | ";
    }

    cout << "\n ������ ����� ����������:\n| ";
    // ���������� �������:
    for (i = 1; i <= n - 1; i++) {
        // ������� ��������� �������:
        for (j = 0; j < n - i;j++) {
            // "�����" ����������:
            if (nums[j] > nums[j + 1]) {
                s = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = s;
            }
        }
    }

    // ����������� ���������������� �������:
    for (k = 0;k < n;k++) {
        cout << nums[k] << " | ";
    }
    cout << endl;

    system("pause>nul");
    return 0;
}
