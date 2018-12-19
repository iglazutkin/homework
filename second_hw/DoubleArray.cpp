struct ArrD {
    explicit ArrD(unsigned int Size);

    ArrD(unsigned int Size, double defaultValue);

    ~ArrD();

    double &operator[](unsigned int index);

    void print();

    unsigned int Size();

    void sort();

private:
    unsigned int Size;
    double *data;

};

void Sorting(double **arr, int left, int right);

#include <iostream>

void Sorting(double *arr, int left, int right) {
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
        Sorting(arr, left, j);
    if (i < right)
        Sorting(arr, i, right);
}

ArrD::ArrD(unsigned int Size) : Size(Size) {
    data = new double[Size];
}

ArrD::ArrD(unsigned int Size, double defaultValue) : Size(Size) {
    data = new double[Size];
    for (auto i = 0; i < Size; ++i) {
        data[i] = defaultValue;
    }
}

ArrD::~ArrD() {
    delete[] data;
}

double &ArrD::operator[](unsigned int index) {
    return data[index];
}

void ArrD::print() {
    std::cout << std::endl;
    for (auto i = 0; i < Size; ++i) {
        std::cout << data[i] << " ";
    }
}

unsigned int ArrD::Size() {
    return Size;
}

void ArrD::sort() {
    Sorting(data, 0, int(Size - 1));
}
