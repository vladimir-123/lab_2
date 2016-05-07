#include "vector_algorithms.h"

std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax) {
    if(0 == fSize) throw SizeZero {};// проверка C++11
    
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        srand(i + time(NULL) / fSize); // т.к. для размера уже всеравно написал проверку
        int tempRand = rand() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }

    return randVector;
}

std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax) {
    if(0 == fSize) throw SizeZero {};// проверка C++11
    
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        std::random_device rd; // другое случайное число
        int tempRand = rd() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }

    return randVector;
}

void ShowVector(std::vector<int> v) { // отобразить вектор
    std::cout << '[';
    for (int i = 0; i < v.size(); ++i)
    {
        if (i < v.size() - 1) {
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << ']';
        }
    }
}

int LinearSearch(const std::vector<int>& numbers, int value) { // поиск значения
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == value) {
            return i;
        }
    }
    return -1;
}

void BubbleSort(std::vector<int>& fVector, bool reverse) { // алгоритм сортировки, неочень эффективно но работает
    if(!reverse) {
        for (int i = 0; i < fVector.size(); ) { //соритировка по возрастанию
            if (fVector[i] > fVector[i + 1] && i < fVector.size() - 1) {
                int temp = fVector[i];
                fVector[i] = fVector[i + 1];
                fVector[i + 1] = temp;
                i = 0;
                continue;
            }
            ++i;
        }
    } else {
        for (int i = 0; i < fVector.size(); ) { //соритировка по убыванию
            if (fVector[i] < fVector[i + 1] && i < fVector.size() - 1) {
                int temp = fVector[i + 1];
                fVector[i + 1] = fVector[i];
                fVector[i] = temp;
                i = 0;
                continue;
            }
            ++i;
        }
    }
}

bool CheckSort(std::vector<int>& fVector, bool reverse) { // отсортирован?
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

int BinarySearch(const std::vector<int>& numbers, int value) {
    
}