#ifndef DOUBLEARRAY_DOUBLEARRAY_H
#define DOUBLEARRAY_DOUBLEARRAY_H

struct DoubleArray {
    explicit DoubleArray(unsigned int size);

    DoubleArray(unsigned int size, double defaultValue);

    ~DoubleArray();

    double &operator[](unsigned int index);

    void print();

    unsigned int size();

    void sort();

private:
    unsigned int sizeOfArray;
    double *data;

};

void quickSort(double *arr[], int left, int right);

#endif //DOUBLEARRAY_DOUBLEARRAY_H
