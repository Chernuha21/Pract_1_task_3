#include <iostream>

int main() {
    // 1. ��������� ������ � �������� ��������
    int arr[5] = { 10, 20, 30, 40, 50 };

    // 2. ���������� ���������, �� ����� �� ������ ������� ������
    int* ptr = arr;

    // ��������� �������� ���������
    std::cout << "Start Value:\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // 3. ���������� 䳿 ��� ����������

    // �������� �������� �� ���� �������
    ptr++;
    std::cout << "\nValue+ (ptr++):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // ������ �� ��������� 2
    ptr += 2;
    std::cout << "\nValue + 2 (ptr += 2):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // �������� �������� �� ���� �������
    ptr--;
    std::cout << "\nValue -1 (ptr--):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // ³������ �� ��������� 2
    ptr -= 2;
    std::cout << "\nValue -2 (ptr -= 2):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    return 0;
}
