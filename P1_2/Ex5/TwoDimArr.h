// Created by eubgt on 8/31/22.

#ifndef EJ5_TWODIMARR_H
#define EJ5_TWODIMARR_H

#include <iostream>
#include <string>

using namespace std;

class TwoDimArr {
public:
    TwoDimArr(int rows, int cols);

    ~TwoDimArr();

    void nam();

    void show();

    void sort();

    void fill();

private:
    int **arr;
    int rows;
    int cols;
    string name;
};


#endif //EJ5_TWODIMARR_H
