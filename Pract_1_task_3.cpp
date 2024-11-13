#include <iostream>

int main() {
    // 1. Створення масиву з декількох елементів
    int arr[5] = { 10, 20, 30, 40, 50 };

    // 2. Оголошення вказівника, що вказує на перший елемент масиву
    int* ptr = arr;

    // Початкове значення вказівника
    std::cout << "Start Value:\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // 3. Арифметичні дії над вказівником

    // Збільшуємо вказівник на одну позицію
    ptr++;
    std::cout << "\nValue+ (ptr++):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // Додаємо до вказівника 2
    ptr += 2;
    std::cout << "\nValue + 2 (ptr += 2):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // Зменшуємо вказівник на одну позицію
    ptr--;
    std::cout << "\nValue -1 (ptr--):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    // Віднімаємо від вказівника 2
    ptr -= 2;
    std::cout << "\nValue -2 (ptr -= 2):\n";
    std::cout << "Value: " << *ptr << ", Adress: " << ptr << std::endl;

    return 0;
}
