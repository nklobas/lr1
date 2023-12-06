#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    // Введите размерность исходного массива
    std::cin >> n;

    std::vector<double> arr(n);

    // Введите элементы массива
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Вывод исходного массива
    std::cout << arr.size() << std::endl;
    for (int i = 0; i < arr.size(); i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    // Добавление суммы и среднего арифметического
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    arr.push_back(sum);
    arr.push_back(sum / (arr.size() - 1));

    // Вывод массива после добавления
    for (int i = 0; i < arr.size(); i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    // Добавление суммы среднего наименьшего и наибольшего
    double min = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    
    double max = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = arr[i] + ((min + max )/ 2);
    }

    // Вывод массива после выполнения операции
    for (int i = 0; i < arr.size(); i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    int choice;
    // Выберите действие (1 - добавить элемент, 2 - удалить элемент, 0 - выход)
    std::cin >> choice;

    while (choice != 0) {
        if (choice == 1) {
            double newElement;
            // Введите элемент для добавления
            std::cin >> newElement;
            arr.push_back(newElement);
            std::cout << "+: " << arr.size() << std::endl;
        }
        else if (choice == 2) {
            if (!arr.empty()) {
                arr.pop_back();
                std::cout << "-: " << arr.size() << std::endl;
            }
        }

        // Вывод массива после выполнения операции
        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        // Добавление суммы и среднего арифметического
        sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        arr.push_back(sum);
        arr.push_back(sum / (arr.size() - 1));

        // Вывод массива после выполнения операции
        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        // Добавление суммы среднего наименьшего и наибольшего
        min = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
        }

        max = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = arr[i] + ((min + max) / 2);
        }

        // Вывод массива после выполнения операции
        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cin >> choice;
    }
    return 0;
}
