#include "vector_algorithms.h"

int main(int argc, char const *argv[])
try {
    int size, min, max; // ask for data
    std::cout << "Enter me size\n";
    std::cin >> size;
    std::cout << "Enter me min\n";
    std::cin >> min;
    std::cout << "Enter me max\n";
    std::cin >> max;

    std::vector<int> v = TrueGenerateRandomVector(size, min, max);
    std::cout << "Your randomly generated vector ";
    ShowVector(v);
    
    /* //linear search
    std::cout << "\nEnter a value to get its index in the vector\n";
    int valueFind;
    std::cin >> valueFind;
    int index = LinearSearch(v, valueFind);
    std::cout << "Index == " << index << "\n";
    */
    bool reverse = 0;
    std::cout << "\nVector before sort ";
    ShowVector(v);
    bool isSort = CheckSort(v, reverse);
    if (isSort) {
        std::cout << "\nIt's sorted";
    }

    BubbleSort(v, reverse);
    std::cout << "\nVector after sort ";
    ShowVector(v);
    isSort = CheckSort(v, reverse);
    if (isSort) {
        std::cout << "\nIt's sorted";
    }

    std::cout << std::endl;

    return 0;
}

catch (SizeZero) {
    std::cerr << "Size must be > 0\n";
}