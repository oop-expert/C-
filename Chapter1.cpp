#include <iostream>
#include <cstdlib>


using namespace std; 

int main() 
{
 
    // ������������� ���������� ��������� �����
    srand(2);
    // �������� �������:
    int nums[12];
    cout << "������ ��������� �����:\n";
    // ���� �� ���������
    for (int& x : nums) {
        x = rand() % 10; // ��������� ����� �� 0 �� 9
        cout << x << " "; // ����������� �������� ��������
    }
    cout << endl;
    // ���������� ��� ������ ������� �������: 
    int length = 0;
    // ���� �� ��������� 
    for (int& x : nums) {
        length++;
    }
    cout << "������ �������: " << length << endl;
    cout << "�������� ����������� �������:\n";
    // ������� �������� �����
    for (int k = 0; k < length;k++) {
        cout << nums[k] << " ";
    }
    cout << endl;

    return 0;
}
