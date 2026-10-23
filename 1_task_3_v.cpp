//Ввести із клавіатури три числа та знайти найменше та найбільше
//серед цих чисел.

#include <iostream>
#include <algorithm>

int main() {
    double a, b, c;
    std::cout << "Введіть три числа: ";
    std::cin >> a >> b >> c;

    // Знаходимо мінімум і максимум за допомогою initializer_list
    double min_val = std::min({a, b, c});
    double max_val = std::max({a, b, c});

    std::cout << "Найменше число: " << min_val << "\n";
    std::cout << "Найбільше число: " << max_val << "\n";

    return 0;
}
