#ifndef VECTOR_ALGORITHMS_H
#define VECTOR_ALGORITHMS_H

#include <iostream>
#include <cstdlib> // rand, NULL
#include <vector>
#include <ctime> // time
#include <random>
#include <cmath>
#include <utility>

class SizeZero {};
void CheckEmpty(int fSize);
std::vector<int> GenerateMyRandomVector(size_t fSize, int fMin, int fMax);
std::ostream& operator<< (std::ostream& os, const std::vector<int>& v);
int LinearSearch(const std::vector<int>& numbers, int value);
void BubbleSort(std::vector<int>& fVector);
bool CheckSort(const std::vector<int>& fVector);
int BinarySearch(const std::vector<int>& numbers, const int value);

#endif