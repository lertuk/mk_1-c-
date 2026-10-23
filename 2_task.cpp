//Визначити, який елемент заданого масиву a(а[1], а[2], ...,а[n]) стоїть
//ближче до початку - найбільший чи найменший.

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Масив порожній.\n";
        return 0;
    }

    std::vector<double> a(n);
    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int min_idx = 0;
    int max_idx = 0;

    // Шукаємо індекси мінімального та максимального елементів
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[min_idx]) {
            min_idx = i;
        }
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
    }

    if (min_idx < max_idx) {
        std::cout << "Найменший елемент ближче до початку (індекс " << min_idx << " проти " << max_idx << ").\n";
    } else if (max_idx < min_idx) {
        std::cout << "Найбільший елемент ближче до початку (індекс " << max_idx << " проти " << min_idx << ").\n";
    } else {
        std::cout << "Усі елементи масиву однакові.\n";
    }

    return 0;
}
