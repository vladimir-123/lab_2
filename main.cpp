#include "vector_algorithms.h"

int main(int argc, char const *argv[])
try {
    int size, min, max; // ask for data
    std::cout << "Enter me size\n";
    std::cin >> size;
    CheckEmpty(size);
    std::cout << "Enter me min\n";
    std::cin >> min;
    std::cout << "Enter me max\n";
    std::cin >> max;

    std::vector<int> v = TrueGenerateRandomVector(size, min, max);
    std::cout << "Your randomly generated vector \n";
    std::cout << v << std::endl;
    ///linear search
    std::cout << "Enter a value to get its index in the vector\n";
    int valueFind;
    std::cin >> valueFind;
    /* // использую для binary search
    int index = LinearSearch(v, valueFind);
    std::cout << "Index == " << index << "\n";
    */
    //bool reverse = 0;
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

catch (SizeZero) {
    std::cerr << "Your empty vector [ ], have fun\n";
}