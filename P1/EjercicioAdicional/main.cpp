#include <iostream>
#include "List.h"

using namespace std;


int main() {
    float a1[5] = {1,2,3,4,5};
    float a2[5] = {10,43,36,24,20};
    List o1{}, o2{}, o3{};
    for (int i = 0; i < SIZE; ++i) {
        o1.nums[i]=a1[i];
        o2.nums[i]=a2[i];
    }
    o3.add(o1,o2);
    o1.show();
    cout<<endl;
    o2.show();
    cout<<endl;
    o3.sort();
    o3.show();
    return 0;
}
