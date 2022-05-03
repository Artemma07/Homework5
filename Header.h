#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
int** Create(size_t rows, size_t columns);

void Free(int** M, size_t rows);

void FillRandomNumbers(int** M, const size_t rows, const size_t columns);

void Print(int** M, size_t rows, size_t columns);

#endif // !HEADER_H
