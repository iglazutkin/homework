#include "DoubleArray.h"
#include <iostream>

void quickSort(double *arr, int left, int right) {
    int i = left, j = right;
    double tmp;
    double pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

DoubleArray::DoubleArray(unsigned int sizeOfArray) : sizeOfArray(sizeOfArray) {
    data = new double[sizeOfArray];
}

DoubleArray::DoubleArray(unsigned int sizeOfArray, double defaultValue) : sizeOfArray(sizeOfArray) {
    data = new double[sizeOfArray];
    for (auto i = 0; i < sizeOfArray; ++i) {
        data[i] = defaultValue;
    }
}

DoubleArray::~DoubleArray() {
    delete[] data;
}

double &DoubleArray::operator[](unsigned int index) {
    return data[index];
}

void DoubleArray::print() {
    std::cout << std::endl;
    for (auto i = 0; i < sizeOfArray; ++i) {
        std::cout << data[i] << " ";
    }
}

unsigned int DoubleArray::size() {
    return sizeOfArray;
}

void DoubleArray::sort() {
    quickSort(data, 0, int(sizeOfArray - 1));
}
