//Знайти середнє арифметичне додатніх елементів кожного
//стовпчика.

#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cout << "Введіть кількість рядків та стовпців матриці: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<double>> matrix(rows, std::vector<double>(cols));
    
    std::cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\nРезультати по стовпцях:\n";
    // Зовнішній цикл по стовпцях
    for (int j = 0; j < cols; ++j) {
        double sum = 0;
        int count = 0;
        
        // Внутрішній цикл по рядках
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][j] > 0) {
                sum += matrix[i][j];
                count++;
            }
        }

        if (count > 0) {
            double average = sum / count;
            std::cout << "Стовпець " << j + 1 << ": середнє арифметичне = " << average << "\n";
        } else {
            std::cout << "Стовпець " << j + 1 << ": немає додатніх елементів\n";
        }
    }

    return 0;
}
