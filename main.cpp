#include "vector_algorithms.h"

int main(int argc, char const *argv[]) {
    int size, min, max; // ask for data
    std::cout << "Enter me size\n";
    std::cin >> size;
    std::cout << "Enter me min\n";
    std::cin >> min;
    std::cout << "Enter me max\n";
    std::cin >> max;

    std::vector<int> v = GenerateMyRandomVector(size, min, max);
    std::cout << "Your randomly generated vector \n";
    std::cout << v << std::endl;

    std::cout << "Enter a value to get its index in the vector\n";
    int valueFind;
    std::cin >> valueFind;

    std::cout << "Vector before sort \n";
    std::cout << v << std::endl;
    bool isSort = CheckSort(v); // reverse == false
    if (isSort) {
        std::cout << "It's sorted\n";
    } else {
        std::cout << "Not sorted\n";
    }

    BubbleSort(v);
    std::cout << "Vector after sort \n";
    std::cout << v << std::endl;
    isSort = CheckSort(v);
    if (isSort) {
        std::cout << "It's sorted\n";
    } else {
        std::cout << "Not sorted\n";
    }
    // поиск индекса
    int index = BinarySearch(v, valueFind);
    std::cout << "Index == " << index << "\n";


    
    return 0;
}
/*
bool RandomValuesInRangeTest(size_t nTests) {
    int fSize = 25;
    std::vector<int> randVector(fSize);
    std::random_device rd;
    int fMax = rd() % 10000;
    int fMin = rd() % 10000;
    if (fMin > fMax) { std::swap(fMin, fMax); }
    for (int i = 0; i < fSize; ++i) {
        randVector[i] = rd() % (1 + fMax - fMin) + fMin;
    }
}
*/