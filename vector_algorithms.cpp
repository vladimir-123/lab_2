#include "vector_algorithms.h"

void CheckEmpty(int fSize) {
    if(0 == fSize) throw SizeZero {};// проверка C++11
}

std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax) { 
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        srand(i + time(NULL) / fSize); // т.к. для размера уже всеравно написал проверку
        int tempRand = rand() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }
    return randVector;
}

std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax) {
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        std::random_device rd; // другое случайное число
        int tempRand = rd() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }
    return randVector;
}

std::ostream& operator<< (std::ostream& os, const std::vector<int>& v) { // отобразить вектор
    os << '[';
    for (int i = 0; i < v.size(); ++i)
    {
        if (i < v.size() - 1) {
            os << v[i] << ", ";
        } else {
            os << v[i] << ']';
        }
    }
    return os;
}

int LinearSearch(const std::vector<int>& numbers, int value) { // поиск значения
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == value) {
            return i;
        }
    }
    return -1;
}

void BubbleSort(std::vector<int>& fVector, const bool reverse) { // алгоритм сортировки, неочень эффективно но работает
    if(!reverse) {
        for (int i = 0; i < fVector.size() - 1; ++i) { //соритировка по возрастанию
            if (fVector[i] > fVector[i + 1]) {
                int temp = fVector[i];
                fVector[i] = fVector[i + 1];
                fVector[i + 1] = temp;
                i = -1;
                continue; 
            }
        }
    } else {
        for (int i = 0; i < fVector.size(); ++i) { //соритировка по убыванию
            if (fVector[i] < fVector[i + 1]) {
                int temp = fVector[i + 1];
                fVector[i + 1] = fVector[i];
                fVector[i] = temp;
                i = -1;
                continue;
            }
        }
    }
}

bool CheckSort(const std::vector<int>& fVector, const bool reverse) { // отсортирован?
    if(!reverse) {
        for (int i = 0; i < fVector.size(); ++i) { //соритировка по возрастанию
            if (fVector[i] > fVector[i + 1] && i < fVector.size() - 1) {
                return false;
            }
        }
    } else {
        for (int i = 0; i < fVector.size(); ++i) { //соритировка по убыванию
            if (fVector[i] < fVector[i + 1] && i < fVector.size() - 1) {
                return false;
            }
        }
    }
    return true;
}

int BinarySearch(const std::vector<int>& numbers, const int value) {
    // не реализована обработка нескольки повторяющихся значений
    // std::cout << "value == " << value << "\n";
    int max = numbers.size(); // все инициализирутеся индексами
    // std::cout << "max == " << max << "\n";
    int min = 0;
    // std::cout << "min == " << min << "\n";
    int guess = numbers.size()/2; // получил ориентиры
    // std::cout << "guess index == " << guess << "\t"
    //           << "guess value == " << numbers[guess] << "\n";
    int range; // не индекс
    int logrtime = log2(numbers.size());
    // std::cout << "worst log time == " << logrtime << "\n";

    if (numbers[guess] == value) {
        // std::cout << "its index == " << guess << "\n";
        return guess;
    }
    
    for (int i = 0; i < logrtime; ++i) {
        // сравниваю с значением
        bool less = value < numbers[guess];
        //std::cout << "is it less? == " << less << "\n";

        if (less) {
            max = guess;
            range = max - min;
            guess = min + range / 2;
        } else {
            min = guess;
            range = max - min;
            guess += range / 2;
        }
        /*
        std::cout << "max == " << max << "\n";
        std::cout << "min == " << min << "\n";
        std::cout << "guess index == " << guess << "\t"
                  << "guess value == " << numbers[guess] << "\n";
        */
        if (numbers[guess] == value) {
            // std::cout << "its index == " << guess << "\n";
            return guess;
        }
    }
    return -1;
} 









