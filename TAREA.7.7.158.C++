#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> array = {
        {4, 7, 1, 3, 5},
        {2, 0, 6, 9, 7},
        {3, 1, 2, 6, 4}
    };

    // Obtener el número de filas y columnas del array
    size_t rows = array.size();
    size_t cols = array[0].size();

    // Imprimir el array en el formato solicitado
    for (size_t i = 0; i < cols; i++) {
        for (size_t j = 0; j < rows; j++) {
            std::cout << array[j][i] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}