#include <iostream>
#include "Object.h"

using namespace std;

int main() {
    Object ex;
    ex.show();
    int res = ex.add(1,2);
    ex.setResult(res);
    res = ex.getResult();
    cout << res;
    return 0;
}
