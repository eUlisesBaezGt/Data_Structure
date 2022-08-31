#include <iostream>

using namespace std;

int main(){
    int *p;
    p = new int[5];

    *(p+0) = 1;
    *(p+1) = 3;
    *(p+2) = 5;
    *(p+3) = 7;
    *(p+4) = 9;

    cout << p << endl;
    for (int i = 0; i < 5; ++i) cout << *(p+i) << "\t";
    cout << endl;
    
    for(int i = 0; i < 5; ++i) cout << p[i] << "\t";
    cout << endl;

    delete p;

    return 0;
}
