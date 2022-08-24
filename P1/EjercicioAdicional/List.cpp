// Created by eubgt on 8/24/22.

#include "List.h"

void List::show() {for(float num : nums){cout << num << " ";}}

void List::sort() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                float aux = nums[j]; nums[j] = nums[j + 1]; nums[j + 1] = aux;
            }
        }
    }
}

void List::add(List a1, List a2) {
    for (int i = 0; i < SIZE; ++i) {
        this->nums[i]=a1.nums[i]+a2.nums[i];
    }
}
