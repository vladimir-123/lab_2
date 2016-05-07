#ifndef VECTOR_ALGORITHMS_H
#define VECTOR_ALGORITHMS_H

#include <iostream>
#include <cstdlib> // rand, NULL
#include <vector>
#include <ctime> // time
#include <random>

class SizeZero {};
std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax);
std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax);
void ShowVector(std::vector<int> v);
int LinearSearch(const std::vector<int>& numbers, int value);
void BubbleSort(std::vector<int>& fVector, bool reverse = 0);
bool CheckSort(std::vector<int>& fVector, bool reverse = 0);

#endif