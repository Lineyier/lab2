#include <iostream>
#include <vector>

int main() {
    const int N = 6;
    std::vector<std::vector<int>> Z = {{1, 2, 3, 4, 5, 6},
                                       {7, 8, 9, 10, 11, 12},
                                       {13, 14, 15, 16, 17, 18},
                                       {19, 20, 21, 22, 23, 24},
                                       {25, 26, 27, 28, 29, 30},
                                       {31, 32, 33, 34, 35, 36}};

    std::vector<int> B;

 // Вывод исходной матрицы
    std::cout << "Исходная матрица Z:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << Z[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // Замена элементов главной диагонали
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = i + 1; j < N; ++j) {
            sum += Z[i][j];
        }
        if (Z[i][i] != 0) {
            Z[i][i] = sum;
            B.push_back(Z[i][i]);
        }
    }


    // Вывод преобразованной матрицы
    std::cout << "\n Преобразованная матрица Z:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << Z[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Вывод массива B
    std::cout << "\n Массив B:" << std::endl;
    for (int i = 0; i < B.size(); ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
