#ifndef VECTOR_ALGORITHMS_H
#define VECTOR_ALGORITHMS_H

#include <iostream>
#include <cstdlib> // rand, NULL
#include <vector>
#include <ctime> // time
#include <random>
#include <cmath>

class SizeZero {};
void CheckEmpty(int fSize);
std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax);
std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax);
std::ostream& operator<< (std::ostream& os, const std::vector<int>& v);
int LinearSearch(const std::vector<int>& numbers, int value);
void BubbleSort(std::vector<int>& fVector, const bool reverse = 0);
bool CheckSort(const std::vector<int>& fVector, const bool reverse = 0);
int BinarySearch(const std::vector<int>& numbers, const int value); // нужно будет поменять тип возвр. знач.

#endif