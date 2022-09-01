// Created by eubgt on 8/31/22.

#include "TwoDimArr.h"

TwoDimArr::TwoDimArr(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    arr = new int *[rows];
    for (int i = 0; i < rows; i++) {
        *(arr + i) = new int[cols];
    }

}

TwoDimArr::~TwoDimArr() {
    for (int i = 0; i < rows; i++) {
        delete[] *(arr + i);
    }
    delete[] arr;
}

void TwoDimArr::nam() {
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
}

void TwoDimArr::show() {
    cout << "Name: " << name << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\t" << *(*(arr + i) + j);
        }
        cout << endl;
    }

}

void TwoDimArr::sort() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
                if (*(*(arr + i) + j) < *(*(arr + i) + k)) {
                    int temp = *(*(arr + i) + j);
                    *(*(arr + i) + j) = *(*(arr + i) + k);
                    *(*(arr + i) + k) = temp;
                }
            }
        }
    }
}

void TwoDimArr::fill() {
    int num = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter number [" << i + 1 << "," << j + 1 << "]: ";
            cin >> num;
            *(*(arr + i) + j) = num;
        }
    }

}

